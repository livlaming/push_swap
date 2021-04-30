/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handler.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/30 14:14:36 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/30 15:09:14 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    error_handler(char *error_message, int exit_status, t_ps_lst *lst_a, t_ps_lst *lst_b)
{   
    if (lst_a)
        free(lst_a);
    if (lst_b)
        free(lst_b);
    write(1, "push swap: ", 12);
    write(1, error_message, ft_strlen(error_message));
    write(1, "\n", 1);
    exit(exit_status);
}