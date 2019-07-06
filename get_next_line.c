/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:47:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/06 02:04:23 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*c[1024];
	char		w[BUFF_SIZE + 1];
	char		*h;
	long long	e;

	if (fd < 0 || !line || (!c[fd] && !(c[fd] = ft_strnew(0))))
		return (-1);
	while ((e = read(fd, w, BUFF_SIZE)) > 0 && !ft_strchr(c[fd], '\n'))
	{
		w[BUFF_SIZE] = '\0';
		h = c[fd];
		c[fd] = ft_strjoin(c[fd], w);
		ft_strdel(&h);
	}
	if (e == -1 || !*(h = c[fd]))
		return ((e == -1) ? -1 : 0);
	e = (ft_strchr(c[fd], '\n')) ? (size_t)(ft_strchr(c[fd], '\n') - c[fd]) :
		0;
	*line = (ft_strchr(c[fd], '\n')) ? ft_strsub(c[fd], 0, e) :
		ft_strdup(c[fd]);
	c[fd] = (ft_strchr(c[fd], '\n')) ?
		ft_strsub(c[fd], e + 1, ft_strlen(h) - e) : 0;
	ft_strdel(&h);
	return (1);
}
