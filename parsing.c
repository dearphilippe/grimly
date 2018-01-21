/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:51:50 by passef            #+#    #+#             */
/*   Updated: 2018/01/19 19:17:13 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int				parse_params(t_env *e)
{
	ft_strrev(e->n1);
	ft_strrev(e->n2);
	e->map_line = ft_atoi(e->n1);
	e->map_col = ft_atoi(e->n2);
	e->buff_gnl = (e->map_line * e->map_col) + e->map_col;
	return (1);
}

int				get_map(t_env *e)
{
	e->map = ft_strnew(e->buff_gnl);
	if (read(e->map_fd, e->map, e->buff_gnl) == -1)
	{
		ft_puterror("cannot read\n");
		return (0);
	}
	return (1);
}

int				get_map_col(t_env *e, int i)
{
	int		j;

	j = 0;
	if (ft_isdigit(e->line[i]))
	{
		while (ft_isdigit(e->line[i]))
		{
			e->n1[j] = e->line[i];
			i--;
			j++;
		}
		if (i >= 0)
		{
			ft_puterror("not an x size not valide");
			return (0);
		}
	}
	else
	{
		ft_puterror("not an x size not valide");
		return (0);
	}
	return (1);
}

int				get_map_line(t_env *e, int i)
{
	int		j;

	j = 0;
	if (ft_isdigit(e->line[i]))
	{
		while (ft_isdigit(e->line[i]))
		{
			e->n2[j] = e->line[i];
			i--;
			j++;
		}
		if (e->line[i] == 'x')
			i--;
		else
		{
			ft_puterror("not an x size not valide");
			return (0);
		}
	}
	else
	{
		ft_puterror("not an x size not valide");
		return (0);
	}
	if (!get_map_col(e, i))
		return (0);
	if (!parse_params(e))
		return (0);
	return (1);
}

int				get_map_params(t_env *e)
{
	int i;

	i = 0;
	gnl_grimly(e, e->map_fd, &e->line); 
	while (e->line[i])
		i++;
	i--;
	if (!ft_isprint(e->line[i]))
	{
		ft_puterror("parameters not printable");
		return (0);
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
	if (!get_map_line(e, i))
		return (0);
	return (1);
}
