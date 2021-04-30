/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sa.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/29 11:03:13 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/30 15:21:11 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// "NOOOOO ADRESSEN OMZETTEN GEEN DATA IN ELKAAR KOPIEREN"
t_ps_lst    *sa(t_ps_lst *lst_a)
{
    t_ps_lst    *begin;
    int        temp;
    
    begin = lst_a;
    if (!lst_a)
        return(lst_a);
    if (!lst_a->content)
        return (lst_a);
    if (lst_a->next)
        lst_a = lst_a->next;
    if (!lst_a->content)
        return (lst_a);
    temp = lst_a->content;
    lst_a->content = begin->content;
    lst_a = lst_a->prev;
    lst_a->content = temp;
    return (lst_a);
}