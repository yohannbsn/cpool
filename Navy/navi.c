/*
** EPITECH PROJECT, 2020
** navie
** File description:
** navi
*/

#include "include/sig.h"
int GLOBAL = 0;

char **creatgrid(void)
{
    int j = 0;
    char **grid = malloc(sizeof(char *) * 9);

    if (grid == NULL)
        return (NULL);
    for (int i = 0; i < 8; i++)
        grid[i] = malloc(sizeof(char) * 9);
    for (int i = 0; i < 8; i++) {
        for (; j <= 8; j++) {
            grid[i][j] = '.';
        }
        j = 0;
    }
    return (grid);
}

void printgrid(char **grid)
{
    int j = 0;
    int i = 1;

    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (; i < 9; i++) {
        my_printf("%d|", i);
        for (; j < 8; j++) {
            my_printf(j == 7 ? "%c\n" : "%c ", grid[i - 1][j]);
        }
        j = 0;
    }
    my_printf("\n");
}

char **greatboat(char *line, char **grid, int x, int y)
{
    if (line[2] == line[5]) {
        for (int i = 0; i + x < (x + line[0] - 48); i++)
            grid[x + i][y] = line[0];
    } else {
        for (int i = 0; i + y < (y + line[0] - 48); i++)
            grid[x][y + i] = line[0];
    }
    return (grid);
}

void put_boat(FILE *o, char **grid)
{
    char *line = NULL;
    size_t len = 0;
    int read = 0;
    char boat = 0;
    int x = 0;
    int y = 0;

    while ((read = getline(&line, &len, o)) != -1) {
        y = (int)line[2] - 65;
        x = (int)line[3] - 49;
        grid = greatboat(line, grid, x, y);
    }
}

int main(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        return (0);
    }
    if (ac == 2) {
        if (errorline(av[1]) == 84)
            return (84);
        if (firstplayer(av[1]) == 84)
            return (84);
    }
    else if (ac == 3) {
        gid_t id = my_getnbr(av[1]);
        if (errorline(av[2]) == 84)
            return (84);
        secondplayer(av[2], id);
    }
    return (0);
}