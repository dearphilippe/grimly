/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 01:15:39 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 22:06:06 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *s;
	size_t i;

	s = (char *)malloc(sizeof(char) * (size));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
