/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_revstr
*/

#include <unistd.h>
#include "my.h"

char *my_revstr(char *str)
{
    int temp = 0;
    char count = 0;
    int revcount = my_strlen(str) -1;

    for (;count < revcount ; revcount--) {
        temp = str[count];
        str[count] = str[revcount];
        str[revcount] = temp;
        count++;
    }
    return str;
}