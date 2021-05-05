/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:08:14 by livlamin      #+#    #+#                 */
/*   Updated: 2021/05/05 09:43:54 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line.h"
# include <stdio.h> //

typedef struct      s_ps_lst
{
	// char				type;
	int     			content;
	struct s_ps_lst	    *next;
	struct s_ps_lst	    *prev;
}					t_ps_lst;

typedef struct      s_ps_stack
{
	struct s_ps_lst		*a_bottom;
	struct s_ps_lst		*a_top;
	int					a_length;
	struct s_ps_lst		*b_bottom;
	struct s_ps_lst		*b_top;
	int					b_length;
}					t_ps_stack;

/* WEG!!!
**
*/
void            print_list(t_ps_lst *lst); //
void            prep_print_list(t_ps_lst *lst_a, t_ps_lst *lst_b, t_ps_stack *stack); //

/*
** error handler
*/
void            error_handler(char *error_message, int exit_status, t_ps_lst *lst_a, t_ps_lst *lst_b);

/*
** push swap linked list
*/
t_ps_lst	    *swap_create_elem(int number, t_ps_lst *prev);
void            swap_list_push_back(t_ps_lst **begin_list, int number);
t_ps_lst		*create_lst(t_ps_lst *lst, int argc, char **argv);
t_ps_stack      *create_stack(t_ps_stack *stack);
t_ps_lst        *clear_lst(t_ps_lst *ps_lst);

/*
** push swap linked list
*/
void			set_stack_values(t_ps_lst *lst, t_ps_stack *stack, char type);

/*
** push swap 
*/

t_ps_lst        *swap(t_ps_lst *lst, t_ps_stack *stack, char type);
// int     checker(int argc, char **argv);
// int     push_swap(int argc, char **argv);

#endif


