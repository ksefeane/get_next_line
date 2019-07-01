/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:02:59 by ksefeane          #+#    #+#             */
/*   Updated: 2019/06/18 09:59:48 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*k;
	t_list	*l;

	if (!lst || !f)
		return (NULL);
	if (!(l = f(lst)))
		return (NULL);
	k = l;
	while (lst->next)
	{
		if (!(l->next = f(lst->next)))
			return (NULL);
		l = l->next;
		lst = lst->next;
	}
	return (k);
}
