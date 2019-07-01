/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:05:44 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/05 15:45:22 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_nalpha(char const *s, char c)
{
	int	*n;
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 0;
	a = 0;
	if (!(n = (int *)malloc(sizeof(int) * ft_nwords(s, c))))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		n[a] = j;
		i += j;
		j = 0;
		a++;
	}
	return (n);
}
