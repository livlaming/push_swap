/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:32:40 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/01 15:14:06 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (list)
// 	{
// 		list->content = data;
// 		list->next = NULL;
// 	}
// 	return (list);
// }

// void	ft_list_push_back(t_list **begin_list, void *data)
// {
// 	t_list	*temp;

// 	temp = *begin_list;
// 	if (*begin_list)
// 	{
// 		while (temp->next != NULL)
// 		{
// 			temp = temp->next;
// 		}
// 		temp->next = ft_create_elem(data);
// 	}
// 	else
// 		*begin_list = ft_create_elem(data);
// }


int main(int argc, char **argv)
{
    t_list **lst;
    int     *temp;

    lst = 0;
    temp = 0;
    if (argc == 1)
        return (0);
    while (argv)
    {
        // *temp = ft_atoi(*argv);
        // ft_list_push_back(lst, temp);
        argv++;
    }
    return (0);
}