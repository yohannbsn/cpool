/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** my_sokoban
*/

#include "includes/sokoban.h"

void my_sokoban(char *filepath)
{
	game_t *game;

	game = NULL;
	game = malloc(sizeof(game_t));
	open_file(game, filepath);
	check_map_game(game);
	get_columns(game);
	copy_in_double(game);
	get_nbr_o(game);
	get_p(game);
	game_loop(game);
}

void game_loop(game_t *game)
{
	int key;

	initscr();
	noecho();
	keypad(stdscr, TRUE);
	refresh();
	while (1) {
		clear();
		for (int row = 0; row < game->row; row += 1)
			mvprintw(row, 0, "%s", game->map[row]);
		key = getch();
		if (key == -1)
			exit(84);
		key_event(game, key);
		refresh();
		check_if_win(game);
	}
	endwin();
}