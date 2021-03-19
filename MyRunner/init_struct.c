/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** init_struct
*/

#include "./includes/my.h"

static char **init_images(void)
{
    char **tbl_img = malloc(sizeof(char *) * 8);

    tbl_img[0] = "sources/01.png";
    tbl_img[1] = "sources/02.png";
    tbl_img[2] = "sources/03.png";
    tbl_img[3] = "sources/04.png";
    tbl_img[4] = "sources/05.png";
    tbl_img[5] = "sources/06.png";
    tbl_img[6] = "sources/07.png";
    return (tbl_img);
}

parallax_t *init_struct(char *image, sfIntRect rect, sfVector2f position)
{
    parallax_t *name = malloc(sizeof(parallax_t));

    sfTexture *texture = sfTexture_createFromFile(image, NULL);
    name->texture = texture;
    sfSprite *sprite = sfSprite_create();
    if (sprite == NULL)
        return (NULL);
    name->sprite = sprite;
    sfSprite_setTexture(name->sprite, name->texture, sfTrue);
    name->position = position;
    sfSprite_setPosition(name->sprite, name->position);
    name->rect = rect;
    sfSprite_setTextureRect(name->sprite, name->rect);
    return (name);
}

parallax_t **init_base(void)
{
    parallax_t **name = malloc(sizeof(parallax_t) * 15);
    char **img = init_images();
    int x = 1920;
    int y = 1080;
    int z = 200;
    int a = 220;

    name[0] = init_struct(img[0], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[1] = init_struct(img[0], (sfIntRect){z, a, x, y}, (sfVector2f){x, 0});
    name[2] = init_struct(img[1], (sfIntRect){z, -100, x, y}, (sfVector2f){0, 0});
    name[3] = init_struct(img[1], (sfIntRect){z, -100, x, y}, (sfVector2f){x, 0});
    name[4] = init_struct(img[2], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[5] = init_struct(img[2], (sfIntRect){z, a, x, y}, (sfVector2f){x, 0});
    name[6] = init_struct(img[3], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[7] = init_struct(img[3], (sfIntRect){z, a, x, y}, (sfVector2f){x, 0});
    name[8] = init_struct(img[4], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[9] = init_struct(img[4], (sfIntRect){z, a, x, y}, (sfVector2f){x, 0});
    name[10] = init_struct(img[5], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[11] = init_struct(img[5], (sfIntRect){z, a, x, y}, (sfVector2f){x, 0});
    name[12] = init_struct(img[6], (sfIntRect){z, a, x, y}, (sfVector2f){0, 0});
    name[13] = init_struct(img[6], (sfIntRect){z, a, x , y}, (sfVector2f){x, 0});
    return (name);
}

void move(sfSprite *sprite, sfVector2f speed2, int x)
{

    if (sfSprite_getPosition(sprite).x < x + 1)
        sfSprite_setPosition(sprite, (sfVector2f){speed2.x + 1920, 0});
    sfSprite_move(sprite, speed2);
}

void speed(parallax_t **parallax)
{
    move(parallax[0]->sprite, (sfVector2f){-100/100}, -1920);
    move(parallax[1]->sprite, (sfVector2f){-100/100}, -1920);
    move(parallax[2]->sprite, (sfVector2f){-150/100}, -1920);
    move(parallax[3]->sprite, (sfVector2f){-150/100}, -1920);
    move(parallax[4]->sprite, (sfVector2f){-250/100}, -1920);
    move(parallax[5]->sprite, (sfVector2f){-250/100}, -1920);
    move(parallax[6]->sprite, (sfVector2f){-350/100}, -1920);
    move(parallax[7]->sprite, (sfVector2f){-350/100}, -1920);
    move(parallax[8]->sprite, (sfVector2f){-450/100}, -1920);
    move(parallax[9]->sprite, (sfVector2f){-450/100}, -1920);
    move(parallax[10]->sprite, (sfVector2f){-550/100}, -1920);
    move(parallax[11]->sprite, (sfVector2f){-550/100}, -1920);
    move(parallax[12]->sprite, (sfVector2f){-650/100}, -1920);
    move(parallax[13]->sprite, (sfVector2f){-650/100}, -1920);
}

void display_sprite(t_csfml *csfml)
{
    if (csfml->seconds > 0.01)
        speed(csfml->parallax);
    for (int x = 0; x != 14 ;x ++){
        sfSprite_setTextureRect(csfml->parallax[x]->sprite, csfml->parallax[x]->rect);
        sfRenderWindow_drawSprite(csfml->window, csfml->parallax[x]->sprite, NULL);
    }
}