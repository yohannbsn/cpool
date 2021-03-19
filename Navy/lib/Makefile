##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

SRC =	my/my_put_nbr.c 	\
		my/my_putchar.c 	\
		my/my_putstr.c		\
		my/my_printchar.c	\
		my/my_printstr.c	\
		my/my_revstr.c		\
		my/my_strlen.c		\
		my/my_printf.c		\
		my/my_printunsigned.c		\
		my/my_printstroctal.c		\
		my/my_octal.c		\
		my/my_unsignbin.c		\
		my/my_hexa.c		\
		my/my_downhexa.c		\
		my/my_ptrhexa.c		\
		my/my_printpourcent.c	\
		my/my_putfloat.c		\
		my/my_putnbr.c		\
		my/my_strcat.c		\
		my/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:  $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
