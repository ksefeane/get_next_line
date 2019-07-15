/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:41:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/15 11:15:04 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	i;

	if (s == NULL || len == 0)
		return (NULL);
	if ((!(f = ft_strnew(len))) || start > (ft_strlen(s) - 1))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		f[i] = s[start];
		i++;
		start++;
	}
	f[i] = '\0';
	return (f);
}
