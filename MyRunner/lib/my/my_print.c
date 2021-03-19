/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_printf_2
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

void my_octal(va_list *ap)
{
    unsigned int octal = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; octal != 0; i++) {
        string[i] = octal % 8 + 48;
        octal /= 8;
    }
    my_putstr(my_revstr(string));
}

void my_downhexa(va_list *ap)
{
    unsigned int downhexa = va_arg(*ap, unsigned int);
    char *string = malloc(sizeof(char) * 8);
    int i = 0;

    for (; downhexa != 0; i++) {
        if (downhexa % 16 < 10) {
            string[i] = downhexa % 16 + 48;
            downhexa /= 16;
        }
        else if (downhexa % 16 >= 10) {
            string[i] = downhexa % 16 + 87;
            downhexa /= 16;
        }
    }
    my_putstr(my_revstr(string));
}