NAME	= megaphone
SRC		= megaphone.cpp
CC		= g++
CCFLAG	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SRC:.cpp=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re