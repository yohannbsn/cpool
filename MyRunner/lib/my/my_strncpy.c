/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_strncpy.c
*/

#include <unistd.h>
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0') {
        if (i < n) {
            dest[i] = src[i];
        }
        i++;
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}