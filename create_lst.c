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

t_ps_lst	*create_lst_a(t_ps_lst *lst_a, int argc, char **argv, long number)
{
	if (argc != 2)
	{
		while (argc > 1)
		{
			number = ft_atoi(*argv);
			swap_list_push_back(&lst_a, number);
			argv++;
			argc--;
		}
	}
	return (lst_a);
}

t_ps_lst	*create_lst_b(t_ps_lst *lst_b, int argc)
{
	if (argc != 2)
	{
		while (argc > 1)
		{
			swap_list_push_back(&lst_b, EMPTY);
			argc--;
		}
	}
	return (lst_b);
}
