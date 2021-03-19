/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_octal(va_list *ap)
{
    unsigned int octal = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; octal != 0; i++) {
        string[i] = octal % 8 + 48;
        octal /= 8;
    }
    my_putstr(my_revstr(string));
}