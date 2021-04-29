/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linked_list_push_swap.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 13:36:21 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/29 13:11:59 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_lst	*swap_create_elem(long number, t_ps_lst *prev)
{
	t_ps_lst	*list;

	list = malloc(sizeof(t_ps_lst));
	if (list)
	{
		list->content = number;
		list->next = NULL;
		list->prev = prev;
	}
	return (list);
}

void	swap_list_push_back(t_ps_lst **begin_list, long number)
{
	t_ps_lst	*temp;
	t_ps_lst	*prev;

	temp = *begin_list;
	prev = NULL;
	if (temp)
	{
		prev = temp;
		while (temp->next != NULL)
		{
			prev = temp->next;
			temp = temp->next;
		}
		temp->next = swap_create_elem(number, prev);
	}
	else
		*begin_list = swap_create_elem(number, prev);
}

t_ps_lst *clear_lst(t_ps_lst *ps_lst)
{
	t_ps_lst	*temp;

	while (ps_lst)
	{
		temp = ps_lst;
		ps_lst = ps_lst->next;
		free(temp);
	}
	free(ps_lst);
	return (NULL);
}