/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sa.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/29 13:18:37 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_lst    *sa(t_ps_lst *lst_a)
{
    t_ps_lst    *begin;
    long        temp;
    
    begin = lst_a;
    temp = EMPTY;
    if (lst_a->content == EMPTY)
        return (lst_a);
    if (lst_a)
        lst_a = lst_a->next;
    if (lst_a->content == EMPTY)
        return (lst_a);
    lst_a->content = begin->content;
    temp = lst_a->content;
    lst_a = lst_a->prev;
    lst_a->content = temp;
    return (lst_a);
}