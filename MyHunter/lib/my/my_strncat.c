/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_strncat
*/

#include <unistd.h>
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = my_strlen(dest);
    while (i < nb && src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}