/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** duck
*/

#include "include/my_hunter.h"


void move_duck(t_game *game)
{
    game->ducks->speed = 0.7;
        game->ducks->position.x += game->ducks->speed;
        if (game->ducks->position.x >= 1710) {
            game->ducks->position.x = -200;
            game->ducks->position.y = rand() % 700;
        }
    sfSprite_setPosition(game->ducks->sprite, game->ducks->position);
}

void create_frame(t_game *game, char *texture_path, sfIntRect rect)
{
    t_duck *new_node = malloc(sizeof(t_duck));
    new_node->texture = sfTexture_createFromFile(texture_path, &rect);
    new_node->size = rect;
    new_node->sprite = sfSprite_create();
    sfSprite_setTexture(new_node->sprite, new_node->texture, sfFalse);
    new_node->next = game->ducks;
    game->ducks = new_node;
    sfSprite_setPosition(new_node->sprite, game->ducks->position);
}

void create_duck(t_game *game)
{
    game->ducks = NULL;
    create_frame(game, "duck.png", (sfIntRect){0, 0, 110, 110});
    create_frame(game, "duck.png", (sfIntRect){110, 0, 110, 110});
    create_frame(game, "duck.png", (sfIntRect){220, 0, 110, 110});
}