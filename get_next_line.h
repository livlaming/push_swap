/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: livlamin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/03 11:43:19 by livlamin      #+#    #+#                 */
/*   Updated: 2021/04/05 21:51:17 by livlamin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_data
{
	char			buf[BUFFER_SIZE + 1];
	ssize_t			bytes_read;
	int				i;
	int				line_start;
	char			*temp;
}					t_data;

int					get_next_line(int fd, char **line);
size_t				ft_strlen(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_strjoin_gnl(t_data *data);
char				*ft_strdup_gnl(char *line);

#endif
