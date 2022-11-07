NAME = scavtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

.o: .cpp
	$(CPP) -c $< $(CPPFLAGS) $@

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY = all re fclean clean