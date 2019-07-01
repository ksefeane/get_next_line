/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:07:52 by ksefeane          #+#    #+#             */
/*   Updated: 2019/05/29 12:32:43 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize <= i)
		return (dstsize + j);
	dst += i;
	while (*src && dstsize-- > i + 1)
		*dst++ = *src++;
	*dst = '\0';
	return (i + j);
}
