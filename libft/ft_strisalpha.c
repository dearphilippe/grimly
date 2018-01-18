/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:24:23 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:24:25 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisalpha(const char *str)
{
	int i;

	i = 0;
	while (ft_isalpha(str[i] == 1))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
