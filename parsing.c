/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:51:50 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 14:52:16 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int				get_map_size(t_env *e, int i)
{
	int		j;

	j = 0;
	while (ft_isdigit(e->line[i]))
	{
		if (!ft_isdigit(e->line[i]))
			return (0);
		e->n2[j] = e->line[i];
		i--;
		j++;
	}
	if (e->line[i] == 'x')
		i--;
	else
		return (0);
	j = 0;
	while (ft_isdigit(e->line[i]))
	{
		if (!ft_isdigit(e->line[i]))
			return (0);
		e->n1[j] = e->line[i];
		i--;
		j++;
	}
	return (1);
}

int				get_map_params(t_env *e)
{
	int i;

	i = 0;
	gnl_grimly(e, e->map_fd, &e->line);
	while (e->line[i])
		i++;
	e->i = i;
	i--;
	if (!ft_isprint(e->line[i]))
	{
		ft_puterror("MAP ERROR");
		e->status = 0;
	}
	e->line[i] ? e->map_end = e->line[i] : 0;
	i--;
	e->line[i] ? e->map_start = e->line[i] : 0;
	i--;
	e->line[i] ? e->map_path = e->line[i] : 0;
	i--;
	e->line[i] ? e->map_road = e->line[i] : 0;
	i--;
	e->line[i] ? e->map_wall = e->line[i] : 0;
	i--;
	if (!get_map_size(e, i))
		return (0);
	return (1);
}