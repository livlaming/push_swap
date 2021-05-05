/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:13:43 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 10:52:33 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_ps_stack *stack, char type)
{
    type = 'a';
    while (stack->a_top)
    {
        printf("content: %d\n", stack->a_top->content);
        stack->a_top = stack->a_top->next;
    }
}