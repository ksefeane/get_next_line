/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:27:15 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/06 11:51:48 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*k;

	k = (t_list *)malloc(sizeof(t_list));
	if (k == NULL)
		return (NULL);
	if (content != NULL)
	{
		k->content = (void *)malloc(content_size);
		if (k->content == NULL)
		{
			free(k);
			return (NULL);
		}
		ft_memcpy(k->content, content, content_size);
		k->content_size = content_size;
	}
	else
	{
		k->content = NULL;
		k->content_size = 0;
	}
	k->next = NULL;
	return (k);
}
