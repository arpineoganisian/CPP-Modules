NAME 	= now_its_weird!

FLAGS	= -g -Wall -Werror -Wextra -Wshadow -Wno-shadow

SRCS	=  main.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS) a.out

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re