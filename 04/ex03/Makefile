

NAME := ex03

GCC := clang++

FLAGS := -std=c++98 -Wall -Wextra -Werror  -g -fsanitize=address

SRC :=				main.cpp \
					AMateria.cpp \
					MateriaSource.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp


OBJ = $(SRC:%.cpp=obj/%.o)


all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	c++ -c $(INLCUDE) $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
re:	fclean all