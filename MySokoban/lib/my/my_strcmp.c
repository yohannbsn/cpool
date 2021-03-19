/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_strcmp
*/

#include <unistd.h>
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int s1_size = 0;
    int s2_size = 0;

    while (s1[i] != '\0') {
        s1_size += s1[i];
        i++;
    }
    i = 0;
    while (s2[i] != '\0') {
        s2_size += s2[i];
        i++;
    }
    if (s1_size < s2_size)
        return (-1);
    else if (s1_size == s2_size)
        return (0);
    else if (s1_size > s2_size)
        return (1);
    return (0);
}