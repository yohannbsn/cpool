/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** window
*/

#include "includes/my.h"

int my_runner(t_csfml *csfml)
{
    sfIntRect rect = {0, 0, 110, 110};
    sfRenderWindow_setFramerateLimit(csfml->window, 60);
    while (sfRenderWindow_isOpen(csfml->window)) {
        csfml->time = sfClock_getElapsedTime(csfml->clock);
        csfml->seconds = csfml->time.microseconds / 1000000.0;
        while (sfRenderWindow_pollEvent(csfml->window, &csfml->event)) {
            if (csfml->event.type == sfEvtClosed)
                sfRenderWindow_close(csfml->window);
        }
        display_sprite(csfml);
        sfRenderWindow_display(csfml->window);
        if (csfml->seconds > 0.5) {
            sfClock_restart(csfml->clock);
        }
        sfRenderWindow_clear(csfml->window, sfBlack);
    }
    return (0);
}