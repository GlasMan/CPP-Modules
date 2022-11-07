NAME = fixed

SRC = main.cpp Fixed.cpp

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