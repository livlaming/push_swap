/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:31:24 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 17:05:03 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
// sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
// ss : sa and sb at the same time.
// pa : push a - take the first element at the top of b and put it at the top of a. Do
// nothing if b is empty.
// pb : push b - take the first element at the top of a and put it at the top of b. Do
// nothing if a is empty.
// ra : rotate a - shift up all elements of stack a by 1. The first element becomes
// the last one.
// rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
// rr : ra and rb at the same time.
// rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
// 7
//  Push_swap Because Swap_push isn’t as natural
//  rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
// rrr : rra and rrb at the same time

int	main(int argc, char **argv)
{
	t_ps_stack	*stack;
	t_ps_lst	*lst_a;
	t_ps_lst	*lst_b;

	lst_a = NULL;
	lst_b = NULL ;
	stack = NULL;
	if (argc == 1)
		return (0);
	(argv)++;
	stack = create_stack(stack);
	lst_a = create_lst(lst_a, argc, argv);
	if (!lst_a)
		error_handler(stack, 0); // wrong input
	set_stack_values_2(lst_a, lst_b, stack);
	print_stack(stack);
	if (sa(stack) != 0)
		error_handler(stack, 0); // wrong input
	print_stack(stack);
	// if (lst_a)
	// 	lst_a = clear_lst(lst_a);
	// if (lst_b)
	// 	lst_b = clear_lst(lst_b);
	// system("leaks push_swap");
	return (0);
}

// valgrind --leak-check=full \
// 		--show-leak-kinds=all \
// 		--track-origins=yes \
// 		--verbose \
// 		--suppressions=~/Documents/push_swap/defaults.supp \
// 		--log-file=valgrind-out.txt \
// 		./push_swap

// valgrind --leak-check=full ./push_swap




