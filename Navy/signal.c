/*
** EPITECH PROJECT, 2020
** signal
** File description:
** signal
*/

#include "include/sig.h"

void lessmajor(char **othergrid)
{
    my_printf("enemy's positions:\n");
    printgrid(othergrid);
    GLOBAL = 0;
}

int bintodec(int bin)
{
    int carry = 0;
    int base = 1;
    int result = 0;

    bin /= 10;
    while (bin > 0) {
        carry = bin % 10;
        result += (carry * base);
        bin = bin / 10;
        base = base * 2;
    }
    return (result);
}

void my_signalsender(char *string, gid_t id)
{
    if (my_strlen(string) < 7) {
        for (int i = my_strlen(string); i != 7; i++) {
            kill(id, SIGUSR1);
            usleep(5000);
        }
    }
    for (int i = 0; i < my_strlen(string);i++) {
        if (string[i] == '0')
            kill(id, SIGUSR1);
        else if (string[i] == '1')
            kill(id, SIGUSR2);
        usleep(5000);
    }
}

char *my_bin(char *buff, char **othergrid, int *myhit)
{
    int nb = 0;
    char *string = malloc(sizeof(char) * 8);
    char *result;
    int i = 0;

    nb = (buff[0] - 65) * 10;
    nb += buff[1] - 49;
    *myhit = nb;
    for (; nb != 0; i++) {
        string[i] = nb % 2 + 48;
        nb /= 2;
    }
    string[i] = '\0';
    result = my_revstr(string);
    return (result);
}