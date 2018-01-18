/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 23:15:15 by passef            #+#    #+#             */
/*   Updated: 2017/04/26 16:48:26 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*el;

	if (!(alst && del))
		return ;
	el = (*alst);
	while (el)
	{
		del(el->content, el->content_size);
		free(el);
		el = el->next;
	}
	*alst = NULL;
}
