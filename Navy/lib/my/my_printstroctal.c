/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void printbase_octal(int c)
{
    char *string = malloc(sizeof(char) * 5);
    int i = 0;

    for (; c != 0; i++) {
        string[i] = c % 8 + 48;
        c /= 8;
    }
    for (; i < 3; i++)
        string[i] = 48;
    my_putstr(my_revstr(string));
}

void my_printstroctal(va_list *ap)
{
    char const *str = va_arg(*ap, char*);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 127)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            printbase_octal(str[i]);
        }
    }
}