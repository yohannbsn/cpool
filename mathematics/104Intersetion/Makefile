##
## EPITECH PROJECT, 2020
## 104itersection
## File description:
## Makefile
##

SRC = 104intersection.c

OBJ = $(SRC:.c=.o)

NAME = 104intersection

all: $(NAME)

$(NAME):		$(OBJ)
		gcc $(OBJ) -o $(NAME) -g

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all
