/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:58:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/09 17:11:01 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	i = 0;
	a = (unsigned char *)d;
	b = (unsigned char *)s;
	while (i < n)
	{
		a[i] = b[i];
		i++;
		if (a[i - 1] == (unsigned char)c)
			return (d + i);
	}
	return (NULL);
}
