NAME = replace

SRC = main.cpp read.cpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY = all re fclean clean