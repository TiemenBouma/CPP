# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tiemen <tiemen@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/09/22 12:48:29 by tiemen        #+#    #+#                  #
#    Updated: 2022/09/22 12:58:46 by tiemen        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = battle

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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