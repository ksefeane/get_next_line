/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:30:39 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/18 10:20:55 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_isspace(char c)
{
	return (c == '\n' || c == ' ' || c == '\t' || c == '\r' || c == '\v' ||
			c == '\f');
}

int			ft_atoi(const char *str)
{
	long int	n;
	long		i;
	long int	s;

	n = 0;
	i = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
	s *= (str[i] == '-') ? -1 : 1;
	(str[i] == '-' || str[i] == '+') ? i++ : 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		n = (n * 10) + (str[i] - 48);
		if ((n * 10) + (str[i] - 48) < n)
			return ((s == 1) ? -1 : 0);
		i++;
	}
	return (n * s);
}
