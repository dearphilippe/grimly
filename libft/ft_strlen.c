/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 14:33:37 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 21:25:46 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	unsigned long len;

	if (!s || ft_strcmp(s, "") == 0)
		return (0);
	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
