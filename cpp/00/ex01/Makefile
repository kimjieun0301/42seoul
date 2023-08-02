NAME		=	PhoneBook

CC			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	PhoneBook.cpp\
				#PhoneBook.hpp\
				#Contact.cpp\

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