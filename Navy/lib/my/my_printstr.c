/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>

void my_printstr(va_list *ap)
{
    char const *str = va_arg(*ap, char*);

    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

