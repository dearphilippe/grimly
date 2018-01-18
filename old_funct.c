/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:54:24 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 11:54:30 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_map_size(t_env *e)
{
	int		j;

	j = 0;
	if (!read(e->map_fd, e->map_params, 25))
		return (0);
	while (e->map_params[e->i] != '\n')
	{
		if (e->map_params[e->i] == 'x')
		{
			e->i++;
			if (!ft_isdigit(e->map_params[e->i]))
				return (0);
			j = 0;
			while (ft_isdigit(e->map_params[e->i]))
			{
				e->n2[j] = e->map_params[e->i];
				e->i++;
				j++;
			}
			return (1);
		}
		if (!ft_isdigit(e->map_params[e->i]))
			return (0);
		e->n1[j] = e->map_params[e->i];
		e->i++;
		j++;
	}
	return (1);
}