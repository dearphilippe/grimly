/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 19:54:04 by passef            #+#    #+#             */
/*   Updated: 2018/01/20 19:58:11 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

char			*ft_bin_fill_wall(t_env *e)
{
	size_t i;

	i = 0;
	while (e->map[i]) 
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


void	bfs_grimly(t_env *e, )
{
	
}

/*




ParcoursLargeur(Labyrinthe G, Case s):
       f = CreerFile();
       f.enfiler(s);
       tant que la file est non vide
                s = f.defiler();
                si s == arrivee: exit
                pour tout voisin t de s dans G qui n'est pas s->parent
                           t->parent = s
                           f.enfiler(t);
       s = arrivee;
       dessiner(s);
       tant que s != depart:
              s = s->parent
              dessiner(s);


il faut juste faire un depart->depth = 0, un t->depth = s->depth + 1,
et quand tu trouves la fin tu continues de defiler tant que la profondeur
est la meme, tu changes de fin si t'en trouves une plus en haut a gauche

*/