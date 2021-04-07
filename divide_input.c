/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   divide_input.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/07 17:30:20 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 17:30:32 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_lst	*divide_input(t_ps_lst *lst_a, int argc, char **argv, int number)
{
	char	**split;

	split = NULL;
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
	else
	{
		split = ft_split(*argv, ' ');
		while (*split)
		{
			number = ft_atoi(*split);
			swap_list_push_back(&lst_a, number);
			split++;
		}
	}
	return (lst_a);
}