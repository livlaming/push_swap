/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sa.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/03 13:53:42 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_lst    *sa(t_ps_lst *lst_a)
{
    t_ps_lst    *second;
    t_ps_lst    *first;
    
    second = lst_a;
    lst_a = lst_a->next;
    first = lst_a;
    if (!lst_a) //
        return(lst_a);
    if (!lst_a->content) //
        return (lst_a);
    second->prev = first;
    second->next = first->next;
    first->prev = NULL;
    first->next = second;
    return (lst_a);
}