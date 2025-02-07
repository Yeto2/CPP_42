CC = c++ -std=c++98 -Wall -Wextra -Werror
NAME = Interface
SRC =  main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp MateriaSource.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all