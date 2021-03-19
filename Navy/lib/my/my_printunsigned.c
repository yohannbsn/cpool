/*
** EPITECH PROJECT, 2020
** my put nbr
** File description:
** put nbr
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void my_printunsigned(va_list *ap)
{
    unsigned int nb = va_arg(*ap, unsigned int);
    char *result = malloc(sizeof(char) * 9);
    unsigned int decade = nb / 10;
    int	unity = nb % 10;
    int i = 0;

    result[i] = unity + '0';
    i++;
    for (;decade != 0 ; i++) {
        unity = decade % 10;
        result[i] = (unity + '0');
        decade /= 10;
    }
    my_putstr(my_revstr(result));
}