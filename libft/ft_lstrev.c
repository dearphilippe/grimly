/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:23:06 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:23:09 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **lst)
{
	t_list	*prev;
	t_list	*next;

	if ((*lst) == NULL)
		return ;
	prev = NULL;
	while ((*lst) != NULL)
	{
		next = (*lst)->next;
		(*lst)->next = prev;
		prev = (*lst);
		(*lst) = next;
	}
	(*lst) = prev;
}
