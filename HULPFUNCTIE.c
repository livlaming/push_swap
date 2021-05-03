/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HULPFUNCTIE.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 17:00:35 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/03 14:26:26 by livlamin      ########   odam.nl         */
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
 }

static void   print_stack(t_ps_stack *stack)
 {
     printf("stack\n");
    if (stack)
    {
        printf("a_bottom:  %p\n", stack->a_bottom);
        printf("a_top: %p\n", stack->a_top);
        printf("a_length: %d\n", stack->a_length);
        printf("b_bottom: %p\n", stack->b_bottom);
        printf("b_top: %p\n", stack->b_top);
        printf("b_length: %d\n", stack->b_length);
        printf("\n");
    }
 }

void    prep_print_list(t_ps_lst *lst_a, t_ps_lst *lst_b, t_ps_stack *stack)
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
    if (stack)
        print_stack(stack);

}