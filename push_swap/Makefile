NAME = push_swap.a

CC = cc

# CFLAGS = -Wall -Wextra -Werror

SOURCES = check_errors.c push_swap.c


OBJ = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
