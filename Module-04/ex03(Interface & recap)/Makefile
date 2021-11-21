NAME 	= interface_and_recap

FLAGS	= -g -Wall -Werror -Wextra -std=c++98

SRCS	= Character.cpp \
		AMateria.cpp Cure.cpp Ice.cpp \
		main.cpp

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