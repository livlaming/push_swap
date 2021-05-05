/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handler.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:14:36 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 15:32:22 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    error_handler(t_ps_stack *stack, int exit_status)
{   
    if (stack->a_top)
        free(stack->a_top);
    if (stack->b_top)
        free(stack->b_top);
    // write(1, "push swap: ", 12);
    // write(1, error_message, ft_strlen(error_message));
    // write(1, "\n", 1);
    write(1, "error\n", 6);
    exit(exit_status);
}