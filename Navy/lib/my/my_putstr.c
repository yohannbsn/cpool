/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** write a string
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}

