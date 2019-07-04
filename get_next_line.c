/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 10:18:23 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/04 17:21:53 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	

int		get_next_line(const int fd, char **line)
{
	char		*w;
	static char	*cache[1024];
	int			r;
	int			e;

	w = ft_strnew(BUFF_SIZE);
}
