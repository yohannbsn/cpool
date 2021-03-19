/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** task03
*/

#include <unistd.h>
#include "my.h"

int my_strlen(char const *str)
{
    int count =  0;
    for (; str[count] != '\0'; count++);
    return count;
}