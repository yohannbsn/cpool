/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_putdectoct
*/

#include "./include/printf.h"

int my_put_dec_to_oct(int nb)
{
    int result = 0;
    int i = 1;
    while (nb != 0) {
        result = result + (nb % 8) * i;
        nb = nb / 8;
        i = i * 10;
    }
    my_put_nbr(result);
}