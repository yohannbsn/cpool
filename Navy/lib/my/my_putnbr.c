/*
** EPITECH PROJECT, 2020
** my put nbr
** File description:
** put nbr
*/

#include "my.h"

void my_putnbr(int nb)
{
    int	decade;
    int	unity;

    if (nb < 0) {
        my_putchar('-');
        my_putnbr(nb * -1);
    }
    else {
    unity = nb % 10;
    decade = nb / 10;
    if (decade != 0)
        my_putnbr(decade);
    my_putchar(unity + '0');
    }
}