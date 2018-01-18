/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 10:19:21 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:33:51 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*c_big;
	char	*c_lit;
	size_t	i;
	size_t	lit_len;

	if (*little == 0)
		return ((char *)big);
	c_big = (char *)big;
	c_lit = (char *)little;
	lit_len = ft_strlen(little);
	i = 0;
	while (c_big[i] && (lit_len + i) <= len)
	{
		if (ft_strncmp(big + i, little, lit_len) == 0)
			return (c_big + i);
		i++;
	}
	return (NULL);
}
