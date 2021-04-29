/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:08:14 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/29 13:29:58 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define EMPTY -2147483649 //is deze global? en moet er dan een g voor met de nieuwe norm?

# include "libft/libft.h"
# include "get_next_line.h"
# include <stdio.h> //

typedef struct      s_ps_lst
{
    long     			content;
	struct s_ps_lst	    *next;
    struct s_ps_lst	    *prev;
}					t_ps_lst;

/* WEG!!!
**
*/
void            print_list(t_ps_lst *lst); //
void            prep_print_list(t_ps_lst *lst_a, t_ps_lst *lst_b); //


/*
** push swap linked list
*/
t_ps_lst        *swap_create_elem(long number, t_ps_lst *prev);
void            swap_list_push_back(t_ps_lst **begin_list, long number);
t_ps_lst        *create_lst_a(t_ps_lst *lst_a, int argc, char **argv, long number);
t_ps_lst        *create_lst_b(t_ps_lst *lst_b, int argc);
t_ps_lst        *clear_lst(t_ps_lst *ps_lst);

/*
** push swap 
*/

t_ps_lst        *sa(t_ps_lst *lst_a);
// int     checker(int argc, char **argv);
// int     push_swap(int argc, char **argv);

#endif


