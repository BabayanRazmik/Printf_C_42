NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror
RM = rm -f

SRCS = $(shell find "." -name "*.c")
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(SRCS)
	ar rc ${NAME} $(OBJS)
	ranlib ${NAME}

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o
