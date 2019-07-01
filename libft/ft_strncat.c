/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:49:24 by ksefeane          #+#    #+#             */
/*   Updated: 2019/05/26 15:04:59 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	a;

	i = -1;
	a = ft_strlen(s1);
	while (s2[++i] && i < n)
		s1[i + a] = s2[i];
	s1[i + a] = '\0';
	return (s1);
}
