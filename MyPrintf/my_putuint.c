/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_putuint
*/

#include "./include/printf.h"

int my_putuint(unsigned int nb)
{
    int modulo;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            modulo = (nb % 10);
            nb = (nb - modulo) / 10;
            my_put_nbr(nb);
            my_putchar(48 + modulo);
        }
        else {
            my_putchar(nb % 10 + 48);
        }
    }
}