/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_stack_values.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:38:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 09:38:23 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_stack_values(t_ps_lst *lst, t_ps_stack *stack, char type)
{
	int         length;
	t_ps_lst    *begin;

	length = 1;
	begin = lst;
	if (type == 'a')
		stack->a_top = lst;
	else
		stack->b_top = lst;
	while (lst->next)
	{
		lst = lst->next;
		length++;
	}
	if (type == 'a')
	{
		stack->a_bottom = lst;
		stack->a_length = length;
	}
	else
	{
		stack->b_bottom = lst;
		stack->b_length = length;
	}
}