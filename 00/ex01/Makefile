# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tiemen <tiemen@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/20 11:41:46 by tiemen        #+#    #+#                  #
#    Updated: 2022/12/01 12:39:21 by tiemen        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
SRC =	Main.cpp \
		Phonebook.cpp \
		Contact.cpp
		
INCLUDE = -I ./include
OBJ = $(SRC:%.cpp=%.o)


CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ -c $(INLCUDE) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
re:	fclean all