/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:31:00 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 15:30:43 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

/*
** On a deux niveaux de lectures ici, une lecture de ficher en parametre
** Une lecture de la e->map_fd en entree si on a pas dargument
** malloc la taille la e->map_fd en premiere ligne
*/

char			**ft_bin_fill_wall(t_env *e)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	e->bitmap = (char **)malloc(sizeof(e->bitmap) * e->map_line + 1);
	e->bitmap[i] = (char *)malloc(sizeof(e->bitmap) * e->map_line + 1);
	while (e->bitmap[i]) // peut tant que i est plus petit que les rows
	{
		ft_bzero(e->bitmap, e->map_line);
		i++;
	}
	while (i < e->map_line)
	{
		e->map[e->i] == e->map_wall ? e->bitmap[i][j] = 00000001 : 0;
		e->map[e->i] == e->map_start ? e->bitmap[i][j] = 00000010 : 0;
		e->map[e->i] == e->map_end ? e->bitmap[i][j] = 00000011 : 0;
		i++;
	}
	return e->bitmap;
}

void				get_map(t_env *e)
{
	
}

int				main(int argc, char **argv)
{
	t_env e;

	init(&e);
	if (argc == 1)
	{
		// Read stdin
	}
	if (argc == 2)
	{
		e.map_fd = open(argv[1], O_RDONLY);
		if (e.map_fd > 0)
		{
			if(!get_map_params(&e))
				return (0);
			get_map(&e);
		}
		else
		{
			ft_puterror("MAP ERROR");
			return (0);
		}
		close(e.map_fd);
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