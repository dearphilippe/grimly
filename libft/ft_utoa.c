/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:25:20 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:25:24 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	utoalen(unsigned int n, int base)
{
	int i;

	i = 1;
	while (n / base > 0)
	{
		n /= base;
		i++;
	}
	return (i);
}

char		goa(unsigned int n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = "0123456789abcdef";
	while (i < n)
		i++;
	return (str[i]);
}

char		*ft_utoa(unsigned int n, int base)
{
	char	*str;
	int		i;

	i = utoalen(n, base);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	while (n / base > 0)
	{
		str[i] = goa(n % base);
		n /= base;
		i--;
	}
	str[i] = goa(n % base);
	return (str);
}
