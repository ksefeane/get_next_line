/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:25:38 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/09 17:20:59 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(a = ft_strnew(ft_strlen(s))) || s == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		a[i] = f((unsigned int)i, s[i]);
		i++;
	}
	return (a);
}
