/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HULPFUNCTIE.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 17:00:35 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/03 14:16:32 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"
 
 void   print_list(t_ps_lst *lst)
 {
    t_ps_lst *head;

    head = NULL;
    while (lst)
    {
        printf("con:  %d\n", lst->content);
        printf("prev: %p\n", lst->prev);
        printf("list: %p\n", lst);
        printf("next: %p\n", lst->next);
        printf("\n");
        head = lst;
        lst = lst->next;
    }
    lst = head;
    printf("\n\n");
    // printf("next: %d\n", lst->content);
    // while (lst)
    // {
    //     if (lst->content == EMPTY)
    //         printf("con:  EMPTY\n");
    //     else
    //         printf("con:  %ld\n", lst->content);
    //     printf("prev: %p\n", lst->prev);
    //     printf("list: %p\n", lst);
    //     printf("next: %p\n", lst->next);
    //     printf("\n");
    //     lst = lst->prev; 
    // }

 }

void    prep_print_list(t_ps_lst *lst_a, t_ps_lst *lst_b)
{
    if (lst_a)
	{
		printf("lst a\n");
		print_list(lst_a);
	}
	if (lst_b)
	{
		printf("lst b\n");
		print_list(lst_b);
	}

}