/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 10:25:09 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 22:15:22 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t n;
	size_t i;
	char *str;

	n = ft_strlen(little);
	i = 0;
	str = (char *)big;
	if (n == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], little, n) == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
