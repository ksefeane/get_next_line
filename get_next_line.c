/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:47:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/05 18:02:53 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	static char	*c[1024];
	char		*w;
	char		*h;
	int			e;


	w = ft_strnew(BUFF_SIZE);
	if (c[fd])
	{
		if (ft_strchr(c[fd], '\n'))
		{
			e = (size_t)(ft_strchr(c[fd], '\n') - c[fd]);
			*line = ft_strsub(c[fd], 0, e);
			h = ft_strsub(c[fd], e + 1, ft_strlen(c[fd]) - e);
			ft_strdel(&c[fd]);
			c[fd] = ft_strdup(h);
			return (1);
		}
	}
	else
	{
		read(fd, w, BUFF_SIZE);
		
	}
	return (0);
}
