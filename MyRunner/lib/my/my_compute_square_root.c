/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday08-yohann.boissenin
** File description:
** my_compute_square_root
*/

#include <unistd.h>
#include "my.h"
int my_compute_square_root(int nb)
{
    int i = 0;
    while (i * i != nb) {
        if (i * i > nb)
            return (0);
        else
            i++;
    }
    return (i);
}