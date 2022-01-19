NAME 	= span

FLAGS	= -g -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp Span.cpp

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