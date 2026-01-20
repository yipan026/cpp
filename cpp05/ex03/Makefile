# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichipan <yichipan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 09:54:38 by yipan             #+#    #+#              #
#    Updated: 2026/01/19 12:06:36 by yichipan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Form.cpp Bureaucrat.cpp AForm.cpp\
	PresidentialPardonForm.cpp, RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp Intern.cpp

OBJCS = $(SRCS:.cpp=.o)
NAME = ex02

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