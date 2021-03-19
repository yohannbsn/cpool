/*
** EPITECH PROJECT, 2020
** navy
** File description:
** rules
*/

#include "include/sig.h"

int errorline(char *av)
{
    FILE *o = fopen(av, "r");
    char *line = NULL;
    size_t len = 0;
    int read = 0;
    char a = '1';

    while ((read = getline(&line, &len, o)) != -1) {
        if (line[0] > '5' || line[0] < '0' || line [0] <= a)
            return (84);
        a = line[0];
    }
}

void iswin(char **othergrid, char** mygrid, int hit, int win)
{
    my_printf("my positions:\n");
    printgrid(mygrid);
    my_printf("enemy's positions:\n");
    printgrid(othergrid);
    if (win == 14)
        my_printf("I won\n");
    else if (hit == 14)
        my_printf("\nEnemy won\n");
}

void istouch(int myhit, char **othergrid, int *win)
{
    usleep(5000);
    if (GLOBAL == 0) {
        my_printf("%c%d: missed\n", (myhit / 10) + 65, (myhit % 10) + 1);
        othergrid[myhit % 10][myhit / 10] = 'o';
    } else {
        my_printf("%c%d: hit\n", (myhit / 10) + 65, (myhit % 10) + 1);
        othergrid[myhit % 10][myhit / 10] = 'x';
        *win += 1;
    }
    GLOBAL = 0;
}

char *goodhit(char *buff, size_t buffsize)
{
    buff[0] = '\0';
    buff[1] = '\0';
    while (buff[0] == '\0' || buff[1] == '\0') {
        my_printf("attack:");
        getline(&buff, &buffsize, stdin);
        if (buff[0] < 'A' || buff[0] > 'H' || buff[1] < '1' || buff[1] > '8') {
            buff[0] = '\0';
            buff[1] = '\0';
            my_printf("wrong position\n");
        }
    }
    return (buff);
}

void apply_hit(char **my_grid, int *hit, int coord, gid_t id)
{
    int x = coord % 10;
    int y = coord / 10;

    if (my_grid[x][y] == '.') {
        my_grid[x][y] = 'o';
        my_printf("%c%d: missed\n\n", y + 65, x + 1);
        usleep(5000);
        kill(id, SIGUSR1);
        usleep(5000);
    }
    else if (my_grid[x][y] != '.') {
        my_grid[x][y] = 'x';
        my_printf("%c%d: hit\n\n", y + 65, x + 1);
        *hit += 1;
        kill(id, SIGUSR2);
    }
    my_printf("my positions:\n");
    printgrid(my_grid);
}