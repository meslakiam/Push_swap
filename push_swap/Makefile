NAME = push_swap.a


CC = cc

 CFLAGS = -Wall -Wextra -Werror

SOURCES = push_args_in_a.c check_errors.c push_swap.c tools.c tools1.c tools2.c ft_split.c ft_strjoin.c \
ft_substr.c move_to_b.c push_operations.c swap_operations.c rotate_operations.c reverse_rotate_operations.c \
sorted_arry.c sorted_back_in_a.c


OBJ = $(SOURCES:.c=.o)


all: push_swap fclean


push_swap: $(NAME)
	$(CC) $(CFLAGS) $(NAME) -o push_swap

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re push_swap
