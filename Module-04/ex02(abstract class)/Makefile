NAME 	= abstract_class

FLAGS	= -g -Wall -Werror -Wextra

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp \
		Brain.cpp

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