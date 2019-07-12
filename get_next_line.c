/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:21:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/12 15:25:32 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	read_cache(const int fd, char **c)
{
	char	w[BUFF_SIZE + 1];
	char	*h;
	long	e;
	
	while ((e = read(fd, w, BUFF_SIZE)) > 0)
	{
		w[e] = '\0';
		h = c[fd];
		c[fd] = ft_strjoin(c[fd], w);
		free(h);
		if (ft_strchr(c[fd], '\n'))
			break ;
	}
}

static int	save_line(const int fd, char **line, char **c)
{
	char	*h;
	char	n;
	long	e;

	if (ft_strchr(c[fd], '\n')) 
	{
		e = ft_strchr(c[fd], '\n') - c[fd];
		n = ft_strlen(c[fd]) - e;
		*line = ft_strsub(c[fd], 0, e);
		h = c[fd];
//		c[fd] = ft_strsub(c[fd], e + 1, n); //strsub has leaks
		c[fd] = ft_strdup("hey");
		free(h);
		return (1);
	}
/*	else
	{
		*line = ft_strdup(c[fd]);
		return (0);
	}*/
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*c[1024];

	(!c[fd]) ? c[fd] = ft_strnew(0) : 0;
	read_cache(fd, c);
	return (save_line(fd, line, c));
}
