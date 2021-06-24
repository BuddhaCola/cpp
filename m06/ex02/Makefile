NAME	=	identify
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

%.o : %.cpp
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re