NAME 	= at_least_this_beats_coffee-making

FLAGS	= -g -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp \
		Bureaucrat.cpp Form.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp \
		Intern.cpp

OBJS	= $(SRCS:.cpp=.o)

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
			c++ $(FLAGS) -o $(NAME) $(OBJS)
.cpp.o:
			c++ $(FLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS) a.out

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re