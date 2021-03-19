/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_unsignbin(va_list *ap)
{
    unsigned int bin = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; bin != 0; i++) {
        string[i] = bin % 2 + 48;
        bin /= 2;
    }
    my_putstr(my_revstr(string));
}