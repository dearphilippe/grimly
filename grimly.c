/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:31:00 by passef            #+#    #+#             */
/*   Updated: 2018/01/20 20:15:18 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
/*
int			find_path()
{
	
}
*/

int			launcher(t_env *e)
{
	if (!get_map_params(e))
		return (0);
	if (!get_map(e))
		return (0);
	printf("%s", e->map);
	return (1);
}

int				main(int argc, char **argv)
{
	t_env e;

	init_grimly(&e);
	if (argc > 1)
	{
		argc--;
		while (argc >= 1)
		{
			e.map_fd = open(argv[argc], O_RDONLY);
			if (e.map_fd)
				launcher(&e);
			else
				ft_puterror("erreur de lecture du fichier");
			argc--;
		}
	}
	else
	{
		e.map_fd = 0;
		if (!launcher(&e))
			return (0);
	}
	if (!e.status)
		return (0);
	return (0);
}
