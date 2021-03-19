##
## EPITECH PROJECT, 2021
## my_Sokoban
## File description:
## Makefile
##

SRC		=	main.c				\
			my_sokoban.c		\
			file.c				\
			check.c				\
			get.c				\
			move.c				\
			my_help.c



OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

RM		=	rm -f

CFLAGS	=	-W -Wall -Wextra -pedantic -lncurses -g3

all		:	$(NAME)

$(NAME)	:	$(OBJ)
		make -C ./lib/my
		gcc -o 	$(NAME) $(OBJ) $(CFLAGS) -Llib/my -lmy

clean	:
		rm -f	$(OBJ)

fclean	:	clean
		rm -f 	$(NAME)
		make fclean -C ./lib/my

re		:	fclean all
