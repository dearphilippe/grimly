/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:31:00 by passef            #+#    #+#             */
/*   Updated: 2018/01/19 16:46:48 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

/*
** On a deux niveaux de lectures ici, une lecture de ficher en parametre
** Une lecture de la e->map_fd en entree si on a pas dargument
** malloc la taille la e->map_fd en premiere ligne
*/

char			*ft_bin_fill_wall(t_env *e)
{
	size_t i;

	i = 0;
	while (e->map[i]) // peut etre tant que i est plus petit que les rows
	{
		ft_bzero(e->map, e->map_line);
		i++;
	}
	while (i < e->map_line)
	{
		e->map[e->i] == e->map_wall ? e->map[i] = 00000001 : 0;
		e->map[e->i] == e->map_start ? e->map[i] = 00000010 : 0;
		e->map[e->i] == e->map_end ? e->map[i] = 00000011 : 0;
		e->map[e->i] == e->map_road ? e->map[i] = 00000101 : 0;
		i++;
	}
	return e->map;
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

/*
frontier = Queue()
frontier.put(start )
visited = {}
visited[start] = True

while not frontier.empty():
   current = frontier.get()
   for next in graph.neighbors(current):
      if next not in visited:
         frontier.put(next)
         visited[next] = True
*/