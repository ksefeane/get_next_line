/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:17:57 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/05 13:05:12 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(a = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (i < ft_strlen(s))
	{
		a[i] = f(s[i]);
		i++;
	}
	return (a);
}
