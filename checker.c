/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:32:40 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 17:31:15 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps_lst	*lst_a;
	t_ps_lst	*lst_b;

	lst_a = 0;
	lst_b = 0;
	if (argc == 1)
		return (0);
	(argv)++;
	lst_a = divide_input(lst_a, argc, argv, 0);
	print_list(lst_a); //
	return (0);
}
