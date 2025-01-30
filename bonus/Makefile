NAME_BONUS = checker

GET = ./get_next_line/get_next_line.c
GET_UTILS = ./get_next_line/get_next_line_utils.c
CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES_BONUS = $(GET) $(GET_UTILS) check_if_sorted_bonus.c check_validation_bonus.c checker.c ft_splite_bonus.c ft_substr_bonus.c \
push_args_in_a.c_bonus.c utils_bonus.c utils1_bonus.c utils2_bonus.c swap_operations_bonus.c rotate_operations_bonus.c \
reverse_rotate_operations_bonus.c push_operations_bonus.c

OBJ_BONUS = $(SOURCES_BONUS:.c=.o)

all: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
	@$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)

clean : 
	@rm -rf $(OBJ_BONUS)

fclean : clean
	@rm -rf $(NAME_BONUS)

re : fclean all

.PHONY : all clean fclean re