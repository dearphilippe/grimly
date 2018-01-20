/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grimly.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:27:38 by passef            #+#    #+#             */
/*   Updated: 2018/01/19 14:54:57 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

void		init_grimly(t_env *e)
{
	e->status = 1;
	e->buff_gnl = 1;
	e->i = 0;
	e->map_line = 0;
	e->map_col = 0;
	ft_bzero(e->n1, 6);
	ft_bzero(e->n2, 6);
	ft_bzero(e->carry, 10);
}
