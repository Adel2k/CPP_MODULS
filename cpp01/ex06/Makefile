PROGRAM_NAME = Harl

CPPFLAGS = -Wall -Wextra -Werror -std=c++11 #-fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES = main.cpp Harl.cpp
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