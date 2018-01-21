/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 22:11:00 by passef            #+#    #+#             */
/*   Updated: 2018/01/19 23:26:27 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int		is_empty(void)
{
	if (first == NULL && last == NULL)
		return (1);
	return (0);
}

int		queue_lenght(void)
{
	return nbItem;
}

t_queue		*queue_first(void)
{
	if (is_empty())
		return (0);
	return (first);
}

t_queue		*queue_last(void)
{
	if (is_empty())
		return (0);
	return (last);
}

void		print_queue(void)
{
	if (is_empty())
	{
		printf("rien a afficher\n");
		return ;
	}

	t_queue *tmp = first;

	while (tmp != NULL)
	{
		printf("x : %d y : %d\n", tmp->x, tmp->y);
		tmp = tmp->next;
	}
}

void		push_queue(int x, int y)
{
	t_queue		*item;

	item = malloc(sizeof(*item));

	if (item == NULL)
	{
		printf("pb malloc\n");
		return ;
	}

	item->x = x;
	item->y = y;
	item->next = NULL;

	if (is_empty())
	{
		first = item;
		last = item;
	}
	else
	{
		last->next = item;
		last = item;
	}
	nbItem++;
}

void		pop_queue(void)
{
	if (is_empty())
	{
		printf("file vide, nothing to pop\n");
		return ;
	}
	t_queue *tmp = first;

	if (first == last)
	{
		first = NULL;
		last = NULL;
	}
	else
		first = first->next;
	free(tmp);
	nbItem--;
}

void		clear_queue(void)
{
	if (is_empty())
	{
		printf("Rien a nettoyer, file vide\n");
		return ;
	}
	while (!is_empty())
		pop_queue();
}

int main(void)
{
	printf("taille de la file : %d\n", queue_lenght());
	print_queue();
	
	printf("cmd push\n");
	push_queue(10, 20);
	push_queue(35, 55);
	push_queue(88, 66);
	printf("Taille de la file : %d\n", queue_lenght());
	print_queue();
	
	printf("cmd clear\n");
	clear_queue();
	printf("Taille de la file : %d\n", queue_lenght());
	print_queue();
	
	if (is_empty())
		printf("Check : file vide\n");
	else
		printf("Check : non vide\n"); 
	return (0);
}