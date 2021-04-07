/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linked_list_push_swap.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 13:36:21 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 14:16:45 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap_lst	*swap_create_elem(int number, t_swap_lst *prev)
{
	t_swap_lst	*list;

	list = malloc(sizeof(t_swap_lst));
	if (list)
	{
		list->content = number;
		list->next = NULL;
		list->prev = prev;
	}
	return (list);
}

void	swap_list_push_back(t_swap_lst **begin_list, int number)
{
	t_swap_lst	*temp;
	t_swap_lst	*prev;

	temp = *begin_list;
	prev = *begin_list;
	if (*begin_list)
	{
		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		temp->next = swap_create_elem(number, prev);
	}
	else
		*begin_list = swap_create_elem(number, NULL);
}
