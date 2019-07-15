/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:21:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/15 12:38:26 by ksefeane         ###   ########.fr       */
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

static char	*less_cache(char *s, char c)
{
	char	*f;
	long	i;

	i = 0;
	while (s[i])
	{
		if (s[i - 1] == c)
		{
			f = ft_strsub(s, i, ft_strlen(s) - i);
			return (f);
		}
		i++;
	}
	return (NULL);
}

static int	save_line(const int fd, char **line, char **c)
{
	char	*h;
	long	n;
	long	e;

	h = c[fd];
	if (ft_strchr(c[fd], '\n')) 
	{
		e = ft_strchr(h, '\n') - h;
		n = ft_strlen(h) - e;
		*line = ft_strsub(h, 0, e);
		c[fd] = less_cache(c[fd], '\n');
		free(h);
		return (1);
	}
	else
	{
		*line = ft_strdup(c[fd]);
		free(h);
		return (0);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*c[1024];

	(!c[fd]) ? c[fd] = ft_strnew(0) : 0;
	read_cache(fd, c);
	return (save_line(fd, line, c));
}
