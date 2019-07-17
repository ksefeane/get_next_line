/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:15:14 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/17 15:25:00 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*f;

	if (!(f = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	return (ft_memset(f, '\0', size + 1));
}
