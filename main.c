/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:56:06 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/05 17:01:53 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		main(void)
{
	char 	*a;
	char 	*b;
	size_t  n;

	a = ft_strdup("hello");
	b = ft_strchr(a, 'l');
	ft_putendl(ft_itoa(b - a));
	return (0);
}
