/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** file
*/

#include "includes/sokoban.h"

void open_file(game_t *game, char *filepath)
{
	char *temp = malloc(sizeof(char) * 2);
	int i = 0;
	int tmp = open(filepath, O_RDONLY);

	if (tmp == -1) {
		exit(84);
	}
	while (read(tmp, temp, 1)) {
		i++;
	}
	i++;
	close(tmp);
	game->fd = open(filepath, O_RDONLY);
	game->buffer = NULL;
	game->buffer = malloc((sizeof(char) * i));
	read(game->fd, game->buffer, i);
	game->buffer[i] = '\0';
	close(game->fd);
}

void copy_in_double(game_t *game)
{
	int row = 0;
	int col = 0;
	int temp = 0;
	int columns = 0;

	game->map = malloc(sizeof(char *) * (game->row) + 1);
	game->saved = malloc(sizeof(char *) * (game->row) + 1);
	for (; row < game->row; row++) {
		columns = cols(game, temp);
		game->map[row] = malloc(sizeof(char) * columns + 1);
		game->saved[row] = malloc(sizeof(char) * columns + 1);
		for (col = 0; col < columns; col += 1) {
			game->map[row][col] = game->buffer[temp];
			game->saved[row][col] = game->buffer[temp];

			temp++;
		}
		temp++;
	}
}

int cols(game_t *game, int temp)
{
	int i = 0;

	while (game->buffer[temp] != '\n' && game->buffer[temp] != '\0') {
		temp++;
		i++;
	}
	return (i);
}