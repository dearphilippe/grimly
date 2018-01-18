/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 21:56:07 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:13:25 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	unsigned int	len;
	char			*map;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(map = ft_strnew(len)))
		return (NULL);
	while (s[i])
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	map[i] = 0;
	return (map);
}
