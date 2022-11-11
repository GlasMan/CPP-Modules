NAME = poly

SRC = main.cpp		\
      Animal.cpp	\
      WrongAnimal.cpp \
      Cat.cpp	\
      Dog.cpp	\
      WrongCat.cpp \

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