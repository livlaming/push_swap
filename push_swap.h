/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:08:14 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 14:07:22 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line.h"
# include <stdio.h> //

typedef struct      s_swap_lst
{
    int     			content;
	struct s_swap_lst	*next;
    struct s_swap_lst	*prev;
}					t_swap_lst;

/*
** push swap linked list
*/
t_swap_lst      *swap_create_elem(int number, t_swap_lst *prev);
void            swap_list_push_back(t_swap_lst **begin_list, int number);
// int     checker(int argc, char **argv);
// int     push_swap(int argc, char **argv);

#endif


