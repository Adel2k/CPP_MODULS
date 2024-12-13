PROGRAM_NAME = Bureaucrat

CPPFLAGS = -Wall -Wextra -Werror -std=c++98  #-g3 -fsanitize=address
CPP = c++ $(CPPFLAGS)

SOURCES = 	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotmyRequestForm.cpp \
			PresidentialPardonForm.cpp \

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