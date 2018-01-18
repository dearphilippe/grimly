/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:24:13 by passef            #+#    #+#             */
/*   Updated: 2017/12/28 23:24:18 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisalnum(const char *str)
{
	int i;

	i = 0;
	while (ft_isalpha(str[i] == 1) || ft_isdigit(str[i]) == 1)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
