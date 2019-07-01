/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:19:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/09 17:23:23 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (0);
	return (ft_strcpy(new, s1));
}
