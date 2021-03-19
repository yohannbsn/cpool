/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_sort_int_array
*/

#include <unistd.h>
#include "my.h"

void swap_int(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        while (j < size - (1 - i)) {
            swap_int(&array[j], &array[j + 1]);
            j++;
        }
        i++;
    }
}