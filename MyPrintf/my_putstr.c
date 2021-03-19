/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}