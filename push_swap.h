/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:08:14 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 17:28:01 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line.h"
# include <stdio.h> //

typedef struct      s_ps_lst
{
    int     			content;
	struct s_ps_lst	    *next;
    struct s_ps_lst	    *prev;
}					t_ps_lst;

/* WEG!!!
**
*/
void            print_list(t_ps_lst *lst); 


/*
** push swap linked list
*/
t_ps_lst        *swap_create_elem(int number, t_ps_lst *prev);
void            swap_list_push_back(t_ps_lst **begin_list, int number);
t_ps_lst        *divide_input(t_ps_lst *lst_a, int argc, char **argv, int number);
// int     checker(int argc, char **argv);
// int     push_swap(int argc, char **argv);

#endif


