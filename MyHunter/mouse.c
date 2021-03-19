/*
** EPITECH PROJECT, 2021
** My_hunter
** File description:
** mouse
*/

#include "include/my_hunter.h"

void mouse_click(t_game *game)
{
    float x = game->event->mouseButton.x;
    float y = game->event->mouseButton.y;

    if (x > game->ducks->position.x && x < (game->ducks->position.x + 110) &&
        y > game->ducks->position.y && y < (game->ducks->position.y + 110)) {
            game->ducks->position.x = -199;
            game->ducks->position.y = rand() % 700;
            game->ducks->speed += 0.2;
    }
}