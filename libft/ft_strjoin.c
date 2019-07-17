/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:52:28 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/17 14:33:57 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	long	n;
	long	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	n = 0;
	i = 0;
	while (s1[n])
	{
		s[i] = s1[n];
		i++;
		n++;
	}
	n = 0;
	while (s2[n])
	{
		s[i + n] = s2[n];
		n++;
	}
	s[i + n] = '\0';
	return (s);
}
