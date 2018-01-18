/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:19:50 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:22:00 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcat(t_list **lst1, t_list *lst2)
{
	t_list *ptr;
	t_list *begin_ptr;

	if (*lst1 == NULL && lst2 == NULL)
		return (NULL);
	if (*lst1 == NULL)
		*lst1 = lst2;
	ptr = *lst1;
	begin_ptr = ptr;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = lst2;
	return (begin_ptr);
}
