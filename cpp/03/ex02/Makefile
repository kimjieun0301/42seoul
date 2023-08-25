NAME		=	FragTrap

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	FragTrap.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				main.cpp

OBJS		=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean   :	
			$(RM) $(OBJS)

fclean  :	clean
			$(RM) $(NAME)

re  	:	fclean all

.PHONY  :	all clean fclean re