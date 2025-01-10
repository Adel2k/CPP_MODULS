PROGRAM_NAME = MutantStack

CPPFLAGS = -Wall -Wextra -Werror #-std=c++98 #-g3 -fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES = main.cpp 
OBJECS = $(SOURCES:.cpp=.o)
HEADERS = MutantStack.hpp

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECS)
	$(CPP) $^ -o $(PROGRAM_NAME) -I.

%.o: %.cpp $(HEADERS) Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re