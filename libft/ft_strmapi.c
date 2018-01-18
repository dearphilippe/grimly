/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 20:39:35 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:19:46 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*map;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(map = (char *)malloc(len + 1)))
		return (NULL);
	while (s[i])
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	map[i] = 0;
	return (map);
}
