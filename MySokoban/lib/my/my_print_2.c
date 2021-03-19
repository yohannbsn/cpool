/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_print_2
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

void my_printpourcent(va_list *ap)
{
    my_putchar('%');
}

void my_putfloat(va_list *ap)
{
    double a = va_arg(*ap, double);
    int before = 1;
    double after;
    my_put_nbr(before);
    my_putchar('.');
    after = a - before;
    after *= 1000000;
    my_put_nbr(after);
}