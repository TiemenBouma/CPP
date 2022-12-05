# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 12:10:48 by tbouma            #+#    #+#              #
#    Updated: 2022/12/05 12:19:05 by tbouma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := account
GCC := c++
FLAGS := -std=c++98 -Wall -Wextra -Werror -g -pedantic
SRC :=				Account.cpp \
					test.cpp
INC :=				Account.hpp
OBJ_DIR	:=			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))


all : $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean, fclean, all, re, verbose
