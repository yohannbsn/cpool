/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_strdup
*/

#include <unistd.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *c = malloc(sizeof(char) * my_strlen(src) + 1);

    if (c == NULL)
        return NULL;
    my_strcpy(c, src);
    return (c);
}