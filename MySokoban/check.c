/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** check
*/


#include "includes/sokoban.h"


void check_if_p(game_t *game, int col, int row)
{
	if (game->map[row][col] == 'P') {
		game->posx = col;
		game->posy = row;
		game->p++;
	}
}

void check_map_game(game_t *game)
{
	int i = 0;
	while (game->buffer[i]) {
		if (game->buffer[i] == ' ' || game->buffer[i] == '\n' ||
		game->buffer[i] == '#' || game->buffer[i] == 'P' ||
		game->buffer[i] == 'O' || game->buffer[i] == 'X' ||
		game->buffer[i] == '\0')
		{
			i++;
		} else
			exit(84);
	}
}

void check_if_win(game_t *game)
{
	int row = 0;
	int i = 0;
	int col = 0;
	int columns = 0;
	int temp = 0;

	while (row != game->row) {
		columns = cols(game, temp);
		while (col != columns) {
			i = win(game, row, col, i);
			col++;
			temp++;
		}
		temp++;
		col = 0;
		row++;
	}
}

int win(game_t *game, int row, int col, int i)
{
	if (game->map[row][col] == 'X' && game->saved[row][col] == 'O')
		i++;
	if (i == game->o) {
		endwin();
		exit(0);
	}
	return (i);
}