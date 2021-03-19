/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "./include/printf.h"

int my_printf(char *i, ...)
{
    va_list List;
    va_start(List, i);
    int (*fun[6])(va_list);
    fun['i'] = &funct_i_d;
    fun['d'] = &funct_i_d;
    fun['c'] = &funct_c;
    fun['s'] = &funct_s;
    fun['u'] = &funct_u;
    fun['o'] = &funct_o;
    //fun['x'] = &funct_x;

    for (int y = 0; i[y] != '\0'; y++) {
        if (i[y] == '%') {
            fun[i[++y]](List);
        } else {
            my_putchar(i[y]);
        }
        va_end(List);
    }
    return (0);
}