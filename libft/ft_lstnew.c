/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 22:49:15 by passef            #+#    #+#             */
/*   Updated: 2017/04/26 16:50:39 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*copy;

	copy = NULL;
	if (content)
	{
		if (!(copy = malloc(content_size)))
			return (NULL);
		ft_memcpy(copy, content, content_size);
	}
	new = (t_list *)malloc(sizeof(t_list));
	new->content = copy;
	new->next = NULL;
	new->content_size = (content ? content_size : 0);
	return (new);
}
