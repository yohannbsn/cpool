/*
** EPITECH PROJECT, 2020
** my putcha
** File description:
** my putchar
*/

#include "my.h"
#include <unistd.h>
#include <stdarg.h>

void my_printchar(va_list *ap)
{
    char c = va_arg(*ap, int);
    write(1, &c, 1);
}
