NAME = zombie

SRC = main.cpp Zombie.cpp zombieHorde.cpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY = all re fclean clean