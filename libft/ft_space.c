/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:17:54 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/18 10:20:21 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_gaps(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int			ft_space(const char *s, int n)
{
	int	i;

	i = 0;
	if (n == 1)
		while (s[i] && ft_gaps(s[i]))
			i++;
	if (n == 2)
	{
		i = ft_strlen(s);
		while (ft_gaps(s[i - 1]))
			i--;
		i -= ft_space(s, 1);
	}
	return (i);
}
