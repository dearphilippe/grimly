/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:25:01 by passef            #+#    #+#             */
/*   Updated: 2018/01/03 20:47:51 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t i;
	size_t j;
	char r;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		r = str[i];
		str[i] = str[j];
		str[j] = r;
		j--;
		i++;
	}
	return (str);
}