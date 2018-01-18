/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 14:18:12 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 10:12:13 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	c1 = (unsigned char *)(s1);
	c2 = (unsigned char *)(s2);
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	i--;
	return (c1[i] - c2[i]);
}
