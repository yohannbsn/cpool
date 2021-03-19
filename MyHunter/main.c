/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** main
*/

#include "include/my_hunter.h"

void init_struct(t_game *game)
{
    sfEvent evt;
    game->event = &evt;
    game->src_background = sfTexture_createFromFile("bg.png", NULL);
    game->background = sfSprite_create();
}

void my_hunter(t_game *game)
{
    init_struct(game);
    create_duck(game);
    create_window(game);
}

int main(int ac, char **av)
{
    t_game *game = malloc(sizeof(t_game));
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_help();
        return (84);
    }
    my_hunter(game);
    sfRenderWindow_destroy(game->window);
    return (0);
}