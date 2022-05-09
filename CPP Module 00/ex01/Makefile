NAME	= phonebook
SRCS	= PhoneBook.cpp Contact.cpp main.cpp
INCL	= $($(SRCS):c=h)
CC		= g++
CCFLAG	= -Wall -Wextra -Werror -std=c++98
OBJS	= $(SRCS:.cpp=.o)

all: 	$(NAME)

$(NAME): $(OBJS) ${INCL}
	$(CC) $(CCFLAG) $^ -o $@

%.o: %.c $(INCL)
		$(CC) $(CCFLAGS) -c $^ -o $@

clean:
	@rm -f ${OBJS}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re