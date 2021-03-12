/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/21 16:45:08 by livlamin      #+#    #+#                 */
/*   Updated: 2021/03/08 14:28:29 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = temp;
	}
	*lst = NULL;
}
