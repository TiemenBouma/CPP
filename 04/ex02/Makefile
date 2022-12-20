# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbouma <tbouma@student.42.fr>                +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/02 13:59:00 by tbouma        #+#    #+#                  #
#    Updated: 2022/12/20 09:24:31 by tbouma        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = 	main.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		Brain.cpp

INCLUDE = -I ./include
OBJ = $(SRC:%.cpp=obj/%.o)
CC := c++

CFLAGS = -Wall  -Wextra -std=c++98 -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) -c $(INLCUDE) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
re:	fclean all