/*
** EPITECH PROJECT, 2020
** my rev str$
** File description:
** evil str 2
*/

#include "my.h"

char *my_revstr(char *str)
{
    char temp;
    int i = my_strlen(str) - 1;

    for (int a = 0; a < i; a += 1) {
        temp = str[a];
        str[a]  = str[i];
        str[i] = temp;
        i--;
    }
    return (str);
}