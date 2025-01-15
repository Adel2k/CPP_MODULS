PROGRAM_NAME = btc

CPPFLAGS = -Wall -Wextra -Werror  -g3  -fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES = main.cpp BitcoinExchange.cpp
HEADERS = BitcoinExchange.hpp
OBJECS = $(SOURCES:.cpp=.o)

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