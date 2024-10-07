PROGRAM_NAME = Animal

CPPFLAGS = -Wall -Wextra -Werror -std=c++98  #-g3 -fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES = main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp MateriaSource.cpp
HEADERS = Ice.hpp Cure.hpp AMateria.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp
OBJECS = $(SOURCES:.cpp=.o)

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECS)
	$(CPP) $^ -o $(PROGRAM_NAME) $(HEADERS) -I.

%.o: %.cpp Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re