/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 10:18:23 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/02 16:15:13 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	t(char *s)
{
	ft_putstr(s);
}

int		check_end(char *s)
{
	int		i;

	i = 0;
	while (s[i++])
	{
		if (s[i] == '\n')
			return (++i);
	}
	return (0);
}

void	read_cache(char *cache, char *s)
{
	char *hold;

	hold = ft_strdup(cache);
	ft_strdel(&cache);
	cache = ft_strjoin(hold, s);
	ft_strdel(&hold);
}

void	save_line(char **line, char *cache, int e)
{
	char *hold;

	e = check_end(cache);
	*line = ft_strsub(cache, 0, e - 1);
	hold = ft_strdup(cache);
	ft_strdel(&cache);
	cache = ft_strsub(hold, e, ft_strlen(hold) - e);
	ft_strdel(&hold);
}

int		get_next_line(const int fd, char **line)
{
	static char *cache[1024];
	int			r;
	int			e;
	char		*w;

	e = 0;
	r = 0;
	w = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || !w)
		return (-1);
	if (!(cache[fd]))
		cache[fd] = ft_strnew(0);
	while (read(fd, w, BUFF_SIZE) > 0)
	{
		e = check_end(w);
		read_cache(cache[fd], w);
		if (e > 0)
		{
			save_line(line, cache[fd], e);
			return (1);
		}
	}
	return (-1);
}
