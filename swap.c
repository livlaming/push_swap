/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/04 21:05:01 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_lst    *swap(t_ps_lst *lst, t_ps_stack *stack, char type)
{
    t_ps_lst    *second;
    t_ps_lst    *first;
    
    second = lst;
    lst = lst->next;
    first = lst;
    if (!lst) //
        return(lst);
    if (!lst->content) //
        return (lst);
    second->prev = first;
    second->next = first->next;
    first->prev = NULL;
    first->next = second;
    return (lst);
}