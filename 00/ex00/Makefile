# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:49:25 by tbouma            #+#    #+#              #
#    Updated: 2022/12/02 13:49:26 by tbouma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
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