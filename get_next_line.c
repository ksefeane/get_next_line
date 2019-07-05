/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:47:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/05 23:49:41 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		t(void)
{
	ft_putendl("1");
}

int			get_next_line(const int fd, char **line)
{
	static char	*c[1024];
	char		*w;
	char		*h;
	int			e;

	w = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || (!c[fd] && !(c[fd] = ft_strnew(0))))
		return (-1);
	while ((read(fd, w, BUFF_SIZE) > 0) && !ft_strchr(c[fd], '\n'))
	{
		h = c[fd];
		c[fd] = ft_strjoin(c[fd], w);
		ft_strdel(&h);
	}
	if (ft_strchr(c[fd], '\n'))
	{
		e = (size_t)(ft_strchr(c[fd], '\n') - c[fd]);
		*line = ft_strsub(c[fd], 0, e);
		h = c[fd];
		c[fd] = ft_strsub(c[fd], e + 1, ft_strlen(h) - e);
		ft_strdel(&h);
	}
	else if (ft_strchr(c[fd], '\0'))
	{
		*line = ft_strdup(c[fd]);
		h = c[fd];
		ft_strdel(&c[fd]);
	}
	else
		return (-1);
	return (1);
}
