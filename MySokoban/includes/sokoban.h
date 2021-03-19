/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** sokoban
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include "../lib/my/my.h"

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

typedef struct game_s
{
    int fd;
	char **map;
	char **saved;
	char *buffer;
	int row;
	int col;
	int size;
	int posx;
	int posy;
	int o;
	int p;
	int *pos_o;
}game_t;


#endif /* !SOKOBAN_H_ */
