/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** fun
*/

#include <stdarg.h>
#include <stdlib.h>
#include "./include/printf.h"

int funct_i_d(va_list List)
{
    int in;
    in = va_arg(List, int);
    my_put_nbr(in);
}

int funct_c(va_list List)
{
    char ch;
    ch = va_arg(List, int);
    my_putchar(ch);
}

int funct_s(va_list List)
{
    char *str;
    str = va_arg(List, char *);
    my_putstr(str);
}

int funct_u(va_list List)
{
    unsigned int usint;
    usint = va_arg(List, unsigned int);
    my_putuint(usint);
}

int funct_o(va_list List)
{
    int dec_to_oct;
    dec_to_oct = va_arg(List, int);
    my_put_dec_to_oct(dec_to_oct);
}