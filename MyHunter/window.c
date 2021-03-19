/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** window
*/

#include "include/my_hunter.h"

void open_window(t_game *game)
{
    while (sfRenderWindow_isOpen(game->window)) {
            while (sfRenderWindow_pollEvent(game->window, game->event)) {
            if (game->event->type == sfEvtClosed) {
                sfRenderWindow_close(game->window);
            }
        }
        if (game->event->type == sfEvtMouseButtonPressed) {
                mouse_click(game);
            }
        move_duck(game);
        sfRenderWindow_clear(game->window, sfBlack);
        sfSprite_setTexture(game->background, game->src_background, sfTrue);
        sfRenderWindow_drawSprite(game->window,game->background, NULL);
        sfRenderWindow_drawSprite(game->window, game->ducks->sprite, NULL);
        sfRenderWindow_display(game->window);
    }
}

void create_window(t_game *game)
{
    sfVideoMode mode = {1600, 900, 60};
    game->window = sfRenderWindow_create(mode,
        "my_hunter", sfResize | sfClose, NULL);
    if (!game->window)
        return (84);
    open_window(game);
}
