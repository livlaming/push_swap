/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 17:08:03 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_ps_stack *stack)
{
	t_ps_lst    *first;
	t_ps_lst    *second;
	t_ps_lst    *lst;
	
	lst = stack->a_top;
	first = NULL;
	second = lst;
	lst = lst->next;
	first = lst;
	if (!lst) //
		return(-1);
	if (!lst->content) //
		return (-1);
	second->prev = first;
	second->next = first->next;
	first->prev = NULL;
	first->next = second;
	if (second->next)
	{
		second = second->next;
		second->prev = first->next;
	}
	stack->a_top = lst;
	return (0);
}

int	sb(t_ps_stack *stack)
{
	t_ps_lst    *first;
	t_ps_lst    *second;
	t_ps_lst    *lst;
	
	lst = stack->b_top;
	first = NULL;
	second = lst;
	lst = lst->next;
	first = lst;
	if (!lst) //
		return(-1);
	if (!lst->content) //
		return (-1);
	second->prev = first;
	second->next = first->next;
	first->prev = NULL;
	first->next = second;
	if (second->next)
	{
		second = second->next;
		second->prev = first->next;
	}
	stack->b_top = lst;
	return (0);
}

int	ss(t_ps_stack *stack)
{
	if (sa(stack) != 0 || sb(stack) != 0)
		return(-1);
	return(0);
}
