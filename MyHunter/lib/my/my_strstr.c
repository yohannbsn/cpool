/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_strstr
*/

#include <unistd.h>
#include "my.h"

// cherche la premiüre occurance de la string

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int index = -1;

    while (str[i] != '\0' && index == -1) {
        while (str[j + i] == to_find[j] && index == -1) {
            index = (to_find[j + 1] == '\0') ? i : index;
            j++;
        }
        i++;
    }
    if (index == -1)
        return (NULL);
    else
        return (&str[index]);
}
