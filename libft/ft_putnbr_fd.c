/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:55:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/05/25 14:10:49 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a *= -1;
	}
	if (a > 9)
		ft_putnbr_fd(a / 10, fd);
	a = (a % 10) + 48;
	ft_putchar_fd(a, fd);
}
