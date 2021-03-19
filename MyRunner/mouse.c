/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** mouse
*/

#include "./includes/my.h"

int mouse_clic(sfEvent event, float c_x, float c_y)
{
    float x = event.mouseButton.x;
    float y = event.mouseButton.y;

    if (x > c_x && x < c_x + 110 && y > c_y && y < c_y + 110)
        return (1920);
    return (c_x);
}