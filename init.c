/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:27:38 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 15:29:44 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

static void		init(t_env *e)
{
	e->bitmap = NULL;
	e->status = 1;
	e->buff_gnl = 25;
	e->i = 0;
	e->map_line = 0;
	e->map_col = 0;
	ft_bzero(e->n1, 6);
	ft_bzero(e->n2, 6);
	ft_bzero(e->map_params, ft_strlen(e->map_params));
}