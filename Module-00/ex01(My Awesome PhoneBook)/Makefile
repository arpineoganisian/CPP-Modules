NAME 	= phonebook

FLAGS	= -g -Wall -Werror -Wextra

SRCS	= main.cpp Phonebook.cpp Contact.cpp

OBJS	= $(SRCS:.cpp=.o)

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re test