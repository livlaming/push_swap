/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_lst.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 17:30:20 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/29 12:18:59 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_ps_stack	*create_stack(t_ps_stack *stack)
// {
// 	t_ps_stack	*stack;

// 	stack = malloc(sizeof(t_ps_stack));
// 	if (stack)
// 	{
// 		stack->a_bottom = NULL;
// 		stack->a_top = NULL;
// 		stack->a_length = NULL;
// 		stack->b_bottom = NULL;
// 		stack->b_top = NULL;
// 		stack->b_length = NULL;
// 	}
// 	return (stack);
// }

t_ps_lst	*create_lst_a(t_ps_lst *lst_a, int argc, char **argv, int number)
{
	int i;
	
	i = 0;
	if (argc != 2)
	{
		while (argc > 1)
		{
			// while (argv[i] != '\0')
			// {
			// 	if (argv[i] >= '0' && argv[i] <= '9')
			// 		return(NULL);
			// 	i++;
			// }
			number = ft_atoi(*argv);
			// if (ft_isdigit(number) == 0)
			// 	return (NULL);
			swap_list_push_back(&lst_a, number);
			argv++;
			argc--;
		}
	}
	return (lst_a);
}
