/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 00:42:10 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 10:54:38 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
	{
		join[i++] = *s1++;
	}
	while (*s2)
	{
		join[i++] = *s2++;
	}
	join[i] = 0;
	return (join);
}
