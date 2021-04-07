/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:32:40 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/07 14:20:39 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "libft/libft.h"
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
// static void    divide_input(t_list *list, char *line)
// {
//     printf("line: %s\n", line);
//     (void)list;
// }


int main(int argc, char **argv)
{
    t_swap_lst *lst;
    t_swap_lst *head;
    int     number;
    int     result;
    char    *line;

    line = NULL;
    lst = 0;
    number = 0;
    result = 1;
    if (argc == 1)
        return (0);
    (argv)++;
    while (argc > 1)
    {
        number = ft_atoi(*argv);
        swap_list_push_back(&lst, number);
        (argv)++;
        argc--;
    }
    int i = 0;
    while (lst)
    {
        printf("next: %d\n", lst->content);
        head = lst;
        lst = lst->next;
        i++;
    }
    lst = head;
    // printf("next: %d\n", lst->content);
    while (lst)
    {
        printf("prev: %d\n", lst->content);
        lst = lst->prev; 
    }
    return (0);
}