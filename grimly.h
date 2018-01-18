/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:20:10 by passef            #+#    #+#             */
/*   Updated: 2018/01/18 15:28:58 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H

# include "libft/libft.h"

typedef struct	s_env
{
	int			buff_gnl;
	char		*line;
	char		**bitmap;
	size_t		i;
	int			status;
	char		n1[6];
	char		n2[6];
	char		*map;
	size_t		map_line;
	size_t		map_col;
	char		map_params[25];
	char		map_wall;
	char		map_road;
	char		map_path;
	char		map_start;
	char		map_end;
	int			map_fd;
}				t_env;

int				gnl_grimly(t_env *e, int const fd, char **line);
int				get_map_size(t_env *e, int i);
int				get_map_params(t_env *e);
static void		init(t_env *e);

#endif