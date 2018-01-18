/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 12:41:41 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 10:41:52 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *csrc;
	char *cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	if (!len)
		return (dst);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	csrc += len;
	cdst += len;
	while (len--)
		*--cdst = *--csrc;
	return (dst);
}
