/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 10:18:23 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/01 14:11:18 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char *cache[1024];
	int			r;
	int			e;
	char		*w;

	w = ft_strnew(BUFF);
	if (!(cache[fd]))
		cache[fd] = ft_strnew(0);
	while ((r = read(fd, w
	return (1);
}
