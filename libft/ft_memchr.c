/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:42:42 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/09 17:07:13 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*a;

	i = 0;
	a = s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
