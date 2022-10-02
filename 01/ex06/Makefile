# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tiemen <tiemen@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/02 10:10:24 by tiemen        #+#    #+#                  #
#    Updated: 2022/10/02 12:16:45 by tiemen        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC = 	main.cpp \
		Harl.cpp

INCLUDE = -I ./include
OBJ = $(SRC:%.cpp=obj/%.o)

CFLAGS = -Wall  -Wextra -std=c++98 #-Werror

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