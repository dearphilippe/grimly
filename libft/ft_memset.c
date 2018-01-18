/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:09:09 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 21:33:39 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long i;
	unsigned char a;
	char *str;

	i = 0;
	a = (unsigned char)c;
	str = (char *)s;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (s);
}
