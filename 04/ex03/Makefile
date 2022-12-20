NAME := ex03

CC := c++

FLAGS := -std=c++98 -Wall -Wextra -Werror

SRC :=				main.cpp \
					AMateria.cpp \
					MateriaSource.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp


OBJ = $(SRC:%.cpp=obj/%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) -c $(INLCUDE) $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean
re:	fclean all