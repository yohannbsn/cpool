/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_isneg
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int nb)
{
    if (nb >= 0)
        my_putchar('P');
    if (nb < 0)
        my_putchar('N');
    return 0;
}