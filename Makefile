# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: livlamin <livlamin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/04/01 09:51:07 by livlamin      #+#    #+#                  #
#    Updated: 2021/04/29 12:44:57 by livlamin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker
COMMON = common
LIBFT = libft/libft.a
SRC_BOTH = get_next_line.c \
			get_next_line_utils.c \
			linked_list_push_swap.c \
			create_lst.c \
			sa.c \
			HULPFUNCTIE.c
SRC_CHECK = checker.c	
SRC_SWAP = push_swap.c 
HEADER_FILES = push_swap.h \
				get_next_line.h
OBJ_CHECK = $(addprefix objs/, $(SRC_CHECK:.c=.o))
OBJ_SWAP = $(addprefix objs/, $(SRC_SWAP:.c=.o))
OBJ_BOTH = $(addprefix objs/, $(SRC_BOTH:.c=.o))
CFLAGS = -Wall -Werror -Wextra
all: $(NAME) $(CHECKER)

$(NAME):$(OBJ_SWAP) $(OBJ_BOTH) $(HEADER_FILES) $(LIBFT) 
	$(CC) $(CFLAGS) -I. -Llibft -lft $(OBJ_SWAP) $(OBJ_BOTH) -o push_swap

$(CHECKER): $(OBJ_CHECK) $(OBJ_BOTH)  $(HEADER_FILES) $(LIBFT)
	$(CC) $(CFLAGS) -I. -Llibft -lft $(OBJ_CHECK) $(OBJ_BOTH)  -o checker

objs/%.o: %.c
	$(shell mkdir -p $(dir $@))
	$(CC) $(CFLAGS) $I -c $< -o $@

$(LIBFT): 
	$(MAKE) -C libft
	# mv libft/$(LIBFT) objs

# $(GNL):
# 	$(MAKE) -C get_next_line

clean :
	@$(RM) $(OBJ_CHECK)
	@$(RM) $(OBJ_SWAP)
	@$(RM) -rf objs
	$(MAKE) -C libft clean 
	# $(MAKE) -C get_next_line clean

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(CHECKER)
	$(MAKE) -C libft fclean
	# $(MAKE) -C get_next_line fclean

re:	fclean all

.PHONY: all clean fclean re
