# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tiemen <tiemen@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/20 14:24:55 by tiemen        #+#    #+#                  #
#    Updated: 2022/09/22 09:39:02 by tiemen        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = 	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

INCLUDE = -I ./include
OBJ = $(SRC:%.cpp=obj/%.o)


CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	c++ -c $(INLCUDE) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
re:	fclean all