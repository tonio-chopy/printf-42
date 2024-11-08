NAME = libftprintf.a
SRCS = ft_printf.c \
ft_putnbr.c \
put_c.c \
putstr.c \
put_p.c \

OBJS =	${SRCS:.c=.o}

CC =	cc

CFLAGS =	-Wall -Werror -Wextra

$(NAME):    $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):    $(SRCS)
	$(CC) $(CFLAGS) -c $^

all:    $(OBJS) $(NAME)

clean:
	rm -f ${OBJS}

fclean:	clean;
	rm -f ${NAME}

re:	fclean all
