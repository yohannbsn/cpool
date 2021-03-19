/*
** EPITECH PROJECT, 2020
** my_compute_power_it
** File description:
** task04
*/

#include <unistd.h>
#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    int result;

    if (power < 0) {
        return (0);
    } else if (power == 0) {
        return (1);
    } else {
        result = nb * my_compute_power_rec(nb, power - 1);
    }
    return (result);
}