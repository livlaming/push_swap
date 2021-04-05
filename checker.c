/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <livlamin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/01 10:32:40 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/05 22:03:02 by livlamin      ########   odam.nl         */
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
    t_list *lst;
    int     *temp;
    int     result;
    char    *line;
    (void)argv;

    line = NULL;
    lst = 0;
    temp = 0;
    result = 1;
    if (argc == 1)
        return (0);
    // while (result == 1)
    // {
    //     result = get_next_line(0, &line);
    //     divide_input(lst, line);
    // }
    while (argv)
    {
        *temp = ft_atoi(*argv);
        printf("argv %s", *argv);
        // ft_list_push_back(lst, temp);
        argv++;
    }
    
    return (0);
}