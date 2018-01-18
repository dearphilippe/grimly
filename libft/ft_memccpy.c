/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 21:34:36 by passef            #+#    #+#             */
/*   Updated: 2017/12/29 22:22:20 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned long i;
	unsigned char a;
	unsigned char *s1;
	unsigned char *s2;

	i = 0;
	a = (unsigned char)c;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == a)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
