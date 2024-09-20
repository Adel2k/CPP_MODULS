PROGRAM_NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++ $(CPPFLAGS)

SOURCES = megaphone.cpp
OBJECS = $(SOURCES:.cpp=.o)

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECS)
	$(CPP) $^ -o $(PROGRAM_NAME)

%.o: %.cpp Makefile
	$(CPP) -c $< -o $@

clean:
	rm -rf $(OBJECS)

fclean: clean
	rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re