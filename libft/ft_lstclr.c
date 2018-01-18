/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:22:21 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:22:24 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclr(t_list **lst)
{
	t_list *tmp;

	if ((*lst) == NULL)
		return ;
	while ((*lst) != NULL)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		free(tmp);
		tmp = NULL;
	}
}
