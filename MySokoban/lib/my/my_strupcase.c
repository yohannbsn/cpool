/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_strupcase
*/

#include <unistd.h>
#include "my.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
