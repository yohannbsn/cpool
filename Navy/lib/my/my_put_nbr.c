/*
** EPITECH PROJECT, 2020
** my put nbr
** File description:
** put nbr
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_put_nbr(va_list *ap)
{
    int nb = va_arg(*ap, int);
    my_putnbr(nb);
}