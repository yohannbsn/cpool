/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** my_hunter
*/

#include <time.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "../lib/my/my.h"

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

typedef struct s_duck
{
    sfSprite* sprite;
    sfTexture* texture;
    sfVector2f position;
    sfIntRect size;
    float speed;
    int *i;
    struct s_duck *next;
}t_duck;

typedef struct s_game
{
    sfRenderWindow* window;
    sfSprite* background;
    sfTexture* src_background;
    sfVector2f pos_bgd;
    sfMusic* music;
    sfEvent* event;
    t_duck* ducks;
    sfClock *clock;
    sfTime time;
    float second;
    int bkgd;

}t_game;

int main(int ac, char **av);
void my_help(void);
void my_hunter(t_game *game);
void init_struct(t_game *game);
void create_window(t_game *game);
void open_window(t_game *game);
void create_duck(t_game *game);

#endif /* !MY_HUNTER_H_ */
