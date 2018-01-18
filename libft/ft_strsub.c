/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 15:50:07 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:38:53 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(len + 1)))
		return (NULL);
	while (len-- > 0)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = 0;
	return (new);
}
