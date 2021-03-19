##
## EPITECH PROJECT, 2020
## my_printf
## File description:
## Makefile
##

NAME    = my_printf.a

CC    = gcc

RM    = rm -f

SRCS	=	my_printf.c			\
			my_putuint.c		\
			fun.c				\
			my_put_nbr.c		\
			my_putchar.c		\
			my_putstr.c			\
			my_putdectoct.c 	\
			main.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re