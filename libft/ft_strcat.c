/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 08:07:13 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 14:35:45 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != 0)
	{
		s1[i + len] = s2[i];
		i++;
	}
	s1[len + i] = 0;
	return (s1);
}
