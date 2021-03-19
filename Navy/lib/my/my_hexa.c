/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_hexa(va_list *ap)
{
    unsigned int hexa = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; hexa != 0; i++) {
        if (hexa % 16 < 10) {
            string[i] = hexa % 16 + 48;
            hexa /= 16;
        }
        else if (hexa % 16 >= 10) {
            string[i] = hexa % 16 + 55;
            hexa /= 16;
        }
    }
    my_putstr(my_revstr(string));
}