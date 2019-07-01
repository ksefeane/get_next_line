/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:47:06 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/05 18:02:39 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**w;
	int		i;
	int		a;
	int		*j;

	i = 0;
	a = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(w = (char **)malloc(sizeof(char *) * (ft_nwords(s, c) + 1))))
		return (NULL);
	if (!(j = ft_nalpha(s, c)))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			w[a] = ft_strsub(s, i + 1 - j[a], j[a]);
			a++;
		}
		i++;
	}
	ft_memdel((void**)&j);
	w[a] = NULL;
	return (w);
}
