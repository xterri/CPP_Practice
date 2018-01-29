NAME = phonebook 
CFLAG = -Wall -Wextra -Werror

SRC = phonebook.cpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) $^ -o $(NAME)

./objs/%.o: .sources/%.cpp
	mkdir -p objs
	clang++ -c $< -o $@

clean:
	rm -rf objs
	rm -rf *.o
	rm -rf ./objects/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
