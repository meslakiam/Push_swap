NAME = push_swap.a

GET = ./get_nex_line/get_next_line.c
GET_UTILS = ./get_nex_line/get_next_line_utils.c
CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(GET) $(GET_UTILS) check_if_sorted_bonus.c check_validation_bonus.c checker.c ft_splite_bonus.c ft_strjoin_bonus.c \
push_args_in_a.c_bonus.c utils_bonus.c utils1_bonus.c

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