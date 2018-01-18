/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:19:40 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:19:42 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = (*alst);
	while ((*alst)->next != NULL)
		(*alst) = (*alst)->next;
	(*alst)->next = new;
	(*alst) = tmp;
}
