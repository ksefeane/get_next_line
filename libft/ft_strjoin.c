/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:52:28 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/05 13:21:26 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(s = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcat(s, s1);
	ft_strcat(s, s2);
	return (s);
}
