/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** move
*/

#include "includes/sokoban.h"

int move_up(game_t *game)
{
	if (game->map[game->posy - 1][game->posx] == 'X' &&
	game->map[game->posy - 2][game->posx] != '#' &&
	game->map[game->posy - 2][game->posx] != 'X')
	{
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy - 2][game->posx] = 'X';
		game->map[game->posy - 1][game->posx] = 'P';
		game->posy--;
	} else if (game->map[game->posy - 1][game->posx] != 'X') {
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy - 1][game->posx] = 'P';
		game->posy--;
	}
	return (0);
}

int move_left(game_t *game)
{
	if (game->map[game->posy][game->posx - 1] == 'X' &&
	game->map[game->posy][game->posx - 2] != '#' &&
	game->map[game->posy][game->posx - 2] != 'X')
	{
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy][game->posx - 1] = 'P';
		game->map[game->posy][game->posx - 2] = 'X';
		game->posx--;
	} else if (game->map[game->posy][game->posx - 1] != 'X') {
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy][game->posx - 1] = 'P';
		game->posx--;
	}
	return (0);
}

int move_right(game_t *game)
{
	if (game->map[game->posy][game->posx + 1] == 'X' &&
	game->map[game->posy][game->posx + 2] != '#' &&
	game->map[game->posy][game->posx + 2] != 'X')
	{
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy][game->posx + 1] = 'P';
		game->map[game->posy][game->posx + 2] = 'X';
		game->posx++;
	} else if (game->map[game->posy][game->posx + 1] != 'X') {
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy][game->posx + 1] = 'P';
		game->posx++;
	}
	return (0);
}

int move_down(game_t *game)
{
	if (game->map[game->posy + 1][game->posx] == 'X' &&
	game->map[game->posy + 2][game->posx] != '#' &&
	game->map[game->posy + 2][game->posx] != 'X')
	{
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy + 2][game->posx] = 'X';
		game->map[game->posy + 1][game->posx] = 'P';
		game->posy++;
	} else if (game->map[game->posy + 1][game->posx] != 'X') {
		if (game->saved[game->posy][game->posx] == 'O')
			game->map[game->posy][game->posx] = 'O';
		else
			game->map[game->posy][game->posx] = ' ';
		game->map[game->posy + 1][game->posx] = 'P';
		game->posy++;
	}
	return (0);
}

void key_event(game_t *game, int key)
{
	if (key == 27) {
		endwin();
		return (1);
	}
	if (key == KEY_UP && game->map[game->posy - 1][game->posx] != '#')
		move_up(game);
	if (key == KEY_DOWN && game->map[game->posy + 1][game->posx] != '#')
		move_down(game);
	if (key == KEY_LEFT && game->map[game->posy][game->posx - 1] != '#')
		move_left(game);
	if (key == KEY_RIGHT && game->map[game->posy][game->posx + 1] != '#')
		move_right(game);
}