/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** main
*/

#include "includes/my.h"

t_csfml *init_game(void)
{
    t_csfml *csfml = malloc(sizeof(t_csfml));
    if (csfml == NULL)
        return (NULL);
    sfVideoMode video_mode = {1920, 1080, 32};
    csfml->window = sfRenderWindow_create(video_mode, "My first Window", sfClose
    ,NULL);
    csfml->parallax = init_base();
    csfml->clock = sfClock_create();
        return (csfml);
}

void init(void)
{
    t_csfml *game = init_game();
    if (game == NULL)
        return (84);
    my_runner(game);
}
void main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_help();
        return (84);
    }
    if (ac != 1 || ac != 2)
        return (84);
    init();
}