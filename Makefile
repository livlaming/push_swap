# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: livlamin <livlamin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/01 09:51:07 by livlamin      #+#    #+#                  #
#    Updated: 2021/04/01 12:34:47 by livlamin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker
LIBFT = libft/libft.a
SRC_CHECK = checker.c 
SRC_SWAP = push_swap.c
HEADER_FILES = push_swap.h
OBJ_CHECK = $(addprefix objs/, $(SRC_CHECK:.c=.o))
OBJ_SWAP = $(addprefix objs/, $(SRC_SWAP:.c=.o))
CFLAGS = -Wall -Werror -Wextra
all: $(NAME) $(CHECKER)

$(NAME):$(OBJ_SWAP) $(HEADER_FILES)
	$(CC) $(CFLAGS) -Llibft -I. -lft $(OBJ_SWAP) -o push_swap

$(CHECKER): $(OBJ_CHECK) $(HEADER_FILES)
	$(CC) $(CFLAGS) -Llibft -I. -lft $(OBJ_CHECK) -o checker

objs/%.o: %.c
	$(shell mkdir -p $(dir $@))
	$(CC) $(CFLAGS) $I -c $< -o $@

$(LIBFT): 
	$(MAKE) -C libft

clean :
	@$(RM) $(OBJ_CHECK)
	@$(RM) $(OBJ_SWAP)
	@$(RM) -rf objs
	$(MAKE) -C libft clean 

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(CHECKER)
	$(MAKE) -C libft fclean

re:	fclean all

.PHONY: all clean fclean re
