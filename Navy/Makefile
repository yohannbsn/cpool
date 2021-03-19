##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

SRC =	navi.c		\
		firstplayer.c	\
		secondplayer.c	\
		signal.c		\
		rules.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

all:  $(NAME)

$(NAME):	$(OBJ)
	make -C ./lib
	gcc $(OBJ) -o $(NAME) -Llib -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib

re: fclean all
