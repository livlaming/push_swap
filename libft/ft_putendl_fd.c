/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 15:18:25 by livlamin      #+#    #+#                 */
/*   Updated: 2021/03/08 14:24:50 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &*s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
