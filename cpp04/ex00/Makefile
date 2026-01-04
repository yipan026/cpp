

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp\
	WrongAnimal.cpp WrongCat.cpp

NAME = ex00

all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $(OBJCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re