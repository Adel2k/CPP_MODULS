PROGRAM_NAME = bsp

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
CPP = c++ $(CPPFLAGS)

SOURCES = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJECS = $(SOURCES:.cpp=.o)

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECS)
	$(CPP) $^ -o $(PROGRAM_NAME) -I.

%.o: %.cpp Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re