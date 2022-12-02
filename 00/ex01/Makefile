# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 11:41:46 by tiemen            #+#    #+#              #
#    Updated: 2022/12/02 11:17:29 by tbouma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
SRC =	Main.cpp \
		Phonebook.cpp \
		Contact.cpp
		
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