/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 10:33:10 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 22:16:02 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	else if (ft_strlen(s1) == 0)
		return (-1);
	else if (ft_strlen(s2) == 0)
		return (1);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (str1[i] != str2[i])
			break;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}
