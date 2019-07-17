/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:21:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/17 18:38:44 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static long	read_cache(const int fd, char **c)
{
	char	w[BUFF_SIZE + 1];
	char	*h;
	long	e;

	while (!ft_strchr(c[fd], '\n'))
	{
		if ((e = read(fd, w, BUFF_SIZE)) == 0)
			return (0);
		if (e < 0)
			return (-1);
		w[e] = '\0';
		h = c[fd];
		c[fd] = ft_strjoin(h, w);
		free(h);
		if (ft_strchr(c[fd], '\n'))
			break ;
	}
	return (1);
}

static char	*less_cache(char *s, char c)
{
	char	*f;
	long	i;

	i = 0;
	while (s[i])
	{
		i++;
		if (s[i - 1] == c)
		{
			f = ft_strsub(s, i, ft_strlen(s) - i);
			return (f);
		}
	}
	return (NULL);
}

static int	save_line(const int fd, char **line, char **c)
{
	char	*h;
	long	e;

	if (read_cache(fd, c) < 0)
		return (-1);
	h = c[fd];
	if (ft_strchr(c[fd], '\n'))
	{
		e = ft_strchr(h, '\n') - h;
		*line = ft_strsub(h, 0, e);
		c[fd] = less_cache(c[fd], '\n');
		free(h);
		return (1);
	}
	else if (ft_strlen(c[fd]) > 0)
	{
		*line = ft_strdup(h);
		c[fd] = less_cache(c[fd], '\0');
		free(h);
		free(c[fd]);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*c[1025];

	if (read(fd, NULL, 0) == -1)
		return (-1);
	if (fd < 0 || !line || (!c[fd] && !(c[fd] = ft_strnew(0))))
		return (-1);
	return (save_line(fd, line, c));
}
