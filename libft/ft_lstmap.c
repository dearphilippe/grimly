/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 00:20:40 by passef            #+#    #+#             */
/*   Updated: 2017/04/26 16:50:09 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_map;
	t_list	*lst_tmp;

	if (!lst || !(lst_map = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	lst_map = f(lst);
	lst_tmp = lst_map;
	while (lst->next)
	{
		lst_tmp->next = f(lst->next);
		lst_tmp = lst_tmp->next;
		lst = lst->next;
	}
	return (lst_map);
}
