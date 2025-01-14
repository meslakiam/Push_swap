NAME = push_swap.a


CC = cc

 CFLAGS = -Wall -Wextra -Werror

SOURCES = push_args_in_a.c check_errors.c push_swap.c ft_atoll.c tools.c ft_split.c ft_isdigit.c \
ft_strcmp.c ft_isdigit.c ft_strdup.c ft_strjoin.c ft_substr.c lstadd_back.c lstclear.c lstlast.c \
lstnew.c swap_a.c swap_b.c sa_and_sb.c push_a.c push_b.c rotate_a.c rotate_b.c ra_and_rb.c \
reverse_rotate_a.c reverse_rotate_b.c rra_and_rrb.c

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
