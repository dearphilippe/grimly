/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:19:27 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:21:51 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	utoalen(unsigned long long n, int base)
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

static char	goa(unsigned long long n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = "0123456789abcdef";
	while (i < n)
		i++;
	return (str[i]);
}

char		*ft_llutoa(unsigned long long n, int base)
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
