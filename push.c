/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/05 09:13:43 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 14:11:06 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// pa : push a - take the first element at the top of b and put it at the top of a. Do
// nothing if b is empty.
// pb : push b - take the first element at the top of a and put it at the top of b. Do
// nothing if a is empty.
void    push(t_ps_stack *stack, char type)
{
    type = 'a';
    while (stack->a_top)
    {
        printf("content: %d\n", stack->a_top->content);
        stack->a_top = stack->a_top->next;
    }
}