NAME = ex02

SRC = 	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp

INCLUDE = -I ./include
OBJ = $(SRC:%.cpp=obj/%.o)

CFLAGS = -Wall  -Wextra -std=c++98 -Werror

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