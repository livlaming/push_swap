/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:00:00 by livlamin      #+#    #+#                 */
/*   Updated: 2021/03/08 14:34:03 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*mem;

	mem = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			mem = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (mem);
}
