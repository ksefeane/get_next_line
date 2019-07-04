/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:47:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/04 17:53:19 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	read_cache(

int			get_next_line(const int fd, char **line)
{
	static char	*cache[1024];
	char		*w;

	w = ft_strnew(BUFF_SIZE);
	if (fd < 0 || read(fd, w, 0) < 0 || !line)
		return (-1);
	if (!cache[fd] && !(cache[fd] = ft_strnew(0)))
		return (-1);
}
