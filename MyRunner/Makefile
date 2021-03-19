##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC =	main.c			\
		init_struct.c	\
		my_help.c		\
		window.c		\
		mouse.c

OBJ     =       $(SRC:.c=.o)

NAME    =       my_hunter

CFLAGS	=		-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

all		:  		$(NAME)

$(NAME)	:        $(OBJ)
				make -C ./lib/my
				gcc $(OBJ) -o $(NAME) $(CFLAGS) -Llib/my -lmy -g

clean	:
				rm -f $(OBJ)

fclean	:		clean
				rm -f $(NAME)
				make fclean -C ./lib/my

re		: 		fclean all