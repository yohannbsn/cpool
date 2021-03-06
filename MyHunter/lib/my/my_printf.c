/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_printf
*/

/*
** EPITECH PROJECT, 2020
** PRINTF
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdarg.h>

void my_printstr(va_list *ap)
{
    char const *str = va_arg(*ap, char*);

    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

void my_printchar(va_list *ap)
{
    char c = va_arg(*ap, int);
    my_putchar(c);
}

void print_flag(char *str, int i, va_list *ap)
{
    void(*ptr[13])(va_list *) = {
        my_put_nbr, my_printchar, my_printstr, my_printunsigned, my_put_nbr,
        my_printstroctal, my_octal, my_unsignbin, my_hexa, my_downhexa,
        my_ptrhexa, my_printpourcent, my_putfloat
    };

    char flag[13] = {
        'd', 'c', 's', 'u', 'i', 'S', 'o', 'b', 'X', 'x', 'p', '%', 'f'
    };

    for (int j = 0; j <= 12; j++) {
        if (str[i] == flag[j])
            ptr[j](ap);
    }
}

int my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            i++;
            print_flag(str, i, &ap);
        } else
            my_putchar(str[i]);
    }
    va_end(ap);
    return (0);
}