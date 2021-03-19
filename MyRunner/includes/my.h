/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <time.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <SFML/System/Clock.h>
#include "../lib/my/my.h"

typedef struct parallax
{
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
} parallax_t;

typedef struct dunck
{
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
} dunck_t;

typedef struct csfml_fonction
{
    parallax_t **parallax;
    sfRenderWindow *window;
    sfEvent event;
    // sfSprite* sprite;
    sfClock *clock;
    sfTime time;
    float seconds;
    // float x;
    // float y;
} t_csfml;

void display_sprite(t_csfml *csfml);
parallax_t **init_base(void);
#endif /* !MY_H_ */