/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** background
*/

#include "include/my_hunter.h"

void create_background(t_game *game)
{
    game->pos_bgd.x = 0;
    game->pos_bgd.y = 0;
    game->src_background = sfTexture_createFromFile("background.png", NULL);
    if (!game->src_background)
        return (84);
    game->background = sfSprite_create();
    sfSprite_setTexture(game->src_background, game->background, sfTrue);
    sfSprite_setPosition(game->background,game->pos_bgd);
}