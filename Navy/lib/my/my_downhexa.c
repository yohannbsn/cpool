/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_downhexa(va_list *ap)
{
    unsigned int downhexa = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; downhexa != 0; i++) {
        if (downhexa % 16 < 10) {
            string[i] = downhexa % 16 + 48;
            downhexa /= 16;
        }
        else if (downhexa % 16 >= 10) {
            string[i] = downhexa % 16 + 87;
            downhexa /= 16;
        }
    }
    my_putstr(my_revstr(string));
}