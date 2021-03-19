/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_str_isupper
*/

#include <unistd.h>
#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}