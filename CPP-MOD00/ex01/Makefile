NAME = phonebook

SRC = main.cpp PhoneBook_utils.cpp

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)


clean:
	@rm -rf $(NAME)
fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY = all re fclean clean
