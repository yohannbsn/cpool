/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** get
*/

#include "includes/sokoban.h"

void get_columns(game_t *game)
{
	int i = 0;
	int temp = 0;
	int j = 0;

	while (game->buffer[temp] != '\n') {
		temp++;
	}
	game->col = temp;
	for (; game->buffer[i] != '\0'; i++) {
		if (game->buffer[i] == '\n')
			j++;
	}
	if (game->buffer[i - 1] != '\n')
		j++;
    game->row = j;
}

void get_nbr_o(game_t *game)
{
	int i = 0;
	int j = 0;

	while (game->buffer[j]) {
		if (game->buffer[j] == 'O')
			i++;
		j++;
	}
	j = 0;
	game->o = i;
}

void get_p(game_t *game)
{
	int row = 0;
	int col = 0;
	int columns = 0;
	int temp = 0;

	while (row != game->row) {
		columns = cols(game, temp);
		while (col != columns) {
			check_if_p(game, col, row);
			col++;
			temp++;
		}
		temp++;
		col = 0;
		row++;
	}
	if (game->p != 1)
		exit(84);
}