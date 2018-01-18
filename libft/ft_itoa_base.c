/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:18:17 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:20:46 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoalen(unsigned long n, int base)
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

static char	goa(unsigned long nb, int up)
{
	unsigned long	i;
	char			*str;
	char			*upstr;

	i = 0;
	str = "0123456789abcdef";
	upstr = "0123456789ABCDEF";
	while (i < nb)
		i++;
	if (up)
		return (upstr[i]);
	else
		return (str[i]);
}

static char	*ft_str(unsigned long nb, int len, int base, int up)
{
	char	*str;
	int		i;

	i = len;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	while (nb / base != 0)
	{
		str[i] = goa(nb % base, up);
		nb = nb / base;
		i--;
	}
	str[i] = goa(nb % base, up);
	return (str);
}

char		*ft_itoa_base(unsigned int n, int base, int up)
{
	char			*str;
	unsigned long	nb;
	int				i;

	nb = (unsigned long)n;
	i = ft_itoalen(nb, base);
	str = ft_str(nb, i, base, up);
	return (str);
}
