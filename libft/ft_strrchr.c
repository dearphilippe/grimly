/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 20:35:57 by passef            #+#    #+#             */
/*   Updated: 2017/04/27 11:36:10 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	len = ft_strlen(s);
	ch = (char)c;
	while (s[len] != ch)
	{
		if (len == 0)
			return (0);
		len--;
	}
	return ((char *)(s + len));
}
