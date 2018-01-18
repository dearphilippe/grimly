/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:22:40 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:22:44 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *begin_list, void *content_ref, int (*cmp)())
{
	while (begin_list != NULL)
	{
		if (cmp(begin_list->content, content_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (0);
}
