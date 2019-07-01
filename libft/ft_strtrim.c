/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:23:49 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/18 10:21:24 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int	i;
	int j;

	if (s == 0)
		return (0);
	i = ft_space(s, 1);
	j = ft_space(s, 2);
	if (i == (int)ft_strlen(s) || (i == 0 && j == 0))
		return ((char *)&s[i]);
	return ((char *)ft_strsub(s, i, j));
}
