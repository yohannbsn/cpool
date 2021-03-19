##
## EPITECH PROJECT, 2020
## B-MAT-100-STG-1-1-101pong-yohann.boissenin
## File description:
## Makefile
##

SRC =	main.c		\

NAME =	101pong

CFLAGS	+= -lm

OBJ = 	$(SRC:.c=.o)

$(NAME):	$(OBJ)
		@gcc -lm -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -fr $(NAME)

re:	fclean all