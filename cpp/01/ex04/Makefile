NAME		=	Sed_is_for_losers

CC			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp 

OBJS		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean   :	
			$(RM) $(OBJS)

fclean  :	clean
			$(RM) $(NAME)

re  	:	fclean all

.PHONY  :	all clean fclean re