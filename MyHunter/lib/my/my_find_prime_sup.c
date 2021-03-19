/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday05-yohann.boissenin
** File description:
** my_find_prime_sup
*/

#include <unistd.h>
#include "my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return nb;
}