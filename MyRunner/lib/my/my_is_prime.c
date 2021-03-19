/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_is_prime
*/

#include <unistd.h>
#include "my.h"

int  my_is_prime(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1)
        return (0);
    while (i < nb - 1) {
        if (nb % i == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}
