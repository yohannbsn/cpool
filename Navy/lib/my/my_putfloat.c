/*
** EPITECH PROJECT, 2020
** my put nbr
** File description:
** put nbr
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_putfloat(va_list *ap)
{
    double a = va_arg(*ap, double);
    int before = 1;
    double after;
    my_putnbr(before);
    my_putchar('.');
    after = a - before;
    after *= 1000000;
    my_putnbr(after);
}