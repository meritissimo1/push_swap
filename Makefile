CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = push_swap.c error.c swap.c push.c rotate.c reverse_rotate.c pop.c radix.c is_sorted.c normalize.c five_sort.c three_sort.c
OBJ = $(SRC:.c=.o)
INCLUDE = include/push_swap.h



all: $(NAME)

$(NAME):	$(OBJ) libft/libft.a
		$(CC) $(CFLAGS) $^ -o $(NAME) 

libft/libft.a: 
	make -C libft/

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -I include -c $< -o $@

clean:
	make clean -C libft/
	rm -rf $(OBJ)

fclean:	clean
	make fclean -C libft
	rm -rf $(NAME)

re:		fclean all

.PHONY:    all clean fclean re debug