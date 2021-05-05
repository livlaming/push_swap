/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HULPFUNCTIE.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 17:00:35 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 15:14:27 by livlamin      ########   odam.nl         */
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
    printf("---------stack------------\n\n");
 }

void   print_stack(t_ps_stack *stack)
{
    if (stack->a_top)
    {
        printf("---------lst a------------\n\n");
        print_list(stack->a_top);
    }
    if (stack->b_top)
    {
        printf("---------lst b------------\n\n");
        print_list(stack->b_top);
    }
    if (stack)
    {
        printf("a_top:     %p\n", stack->a_top);
        printf("a_bottom:  %p\n", stack->a_bottom);
        printf("a_length:  %d\n", stack->a_length);
        printf("b_top:     %p\n", stack->b_top);
        printf("b_bottom:  %p\n", stack->b_bottom);
        printf("b_length:  %d\n", stack->b_length);
        printf("\n");
    }
}