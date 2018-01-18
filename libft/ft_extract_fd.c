/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:27:40 by passef            #+#    #+#             */
/*   Updated: 2018/01/10 11:54:50 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_extract_fd(char *str, char c)
{
	int		i;
	int		j;
	char	*tmp = ft_strnew(ft_strlen(str));

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			while (str[i] != c)
			{
				tmp[j] = str[i];
				i++;
				j++;
			}
		}
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}
