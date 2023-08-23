NAME		=	Fixed_03

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	Fixed.cpp \
				main.cpp \
				Point.cpp \
				bsp.cpp

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