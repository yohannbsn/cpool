/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-cpoolday06-yohann.boissenin
** File description:
** my_strncmp
*/

#include <unistd.h>
#include "my.h"

int  my_strncmp(char  const *s1, char  const *s2 , int n)
{
    int size_chain_s1 = 0;
    int size_chain_s2 = 0;

    for (int i = 0; i < n; i = i + 1) {
        size_chain_s1 = size_chain_s1 + s1[i];
        if (s1[i] == '\0')
            i = n;
    }
    for (int j = 0; j < n; j = j + 1) {
        size_chain_s2 = size_chain_s2 + s2[j];
        if (s2[j] == '\0')
            j = n;
    }
    if (size_chain_s1 < size_chain_s2)
        return (-1);
    if (size_chain_s1 > size_chain_s2)
        return (1);
    else
        return (0);
}