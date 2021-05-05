/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_stack_values.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:38:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 12:04:16 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_stack_values_2(t_ps_lst *lst_a, t_ps_lst *lst_b, t_ps_stack *stack)
{
	stack->a_length = 1;
    stack->b_length = 1;
	stack->a_top = lst_a;
	stack->b_top = lst_b;
    if (lst_a)
    {
        while (lst_a->next)
	    {
		    lst_a = lst_a->next;
		    stack->a_length++;
	    }
    }
	stack->a_bottom = lst_a;
    if (lst_b)
    {
        while (lst_b->next)
	    {
		    lst_b = lst_b->next;
		    stack->b_length++;
	    }
    }
    stack->b_bottom = lst_b;
}


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