/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 21:59:39 by passef            #+#    #+#             */
/*   Updated: 2018/01/20 00:31:36 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H 
# define QUEUE_H

#include "grimly.h"

typedef struct			s_queueItem
{
	int					x;
	int					y;
	struct s_queueItem	*next;
}						t_queue;

static t_queue	*first = NULL;
static t_queue	*last = NULL;
static int		nbItem = 0;

int			is_empty(void);
int			queue_lenght(void);
void		print_queue(void);
void		push_queue(int x, int y);
void		pop_queue(void);

#endif