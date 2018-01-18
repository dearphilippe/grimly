/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:24:34 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:24:36 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisprint(const char *str)
{
	int i;

	i = 0;
	while (ft_isprint(str[i]) == 1)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
