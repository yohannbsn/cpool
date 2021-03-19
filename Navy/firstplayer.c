/*
** EPITECH PROJECT, 2020
** signal
** File description:
** signal
*/

#include "include/sig.h"

void gameloopfirst(char **grid, char **othergrid, gid_t id)
{
    size_t buffsize = 4096;
    char *buff = malloc(sizeof(char) * buffsize);
    int hit = 0;
    int myhit = 0;
    int win = 0;
    struct sigaction receve;

    receve.sa_handler = &my_reception;
    receve.sa_flags = SA_RESTART;
    sigemptyset(&receve.sa_mask);
    sigaction(SIGUSR2, &receve, NULL);
    sigaction(SIGUSR1, &receve, NULL);
    GLOBAL = 0;
    while (hit < 14 && win < 14) {
        buff = goodhit(buff, buffsize);
        buff = my_bin(buff, othergrid, &myhit);
        my_signalsender(buff, id);
        istouch(myhit, othergrid, &win);
        my_printf("\nwaiting for enemy's attack...\n");
        for (int i = 0; i <= 6; i++)
            pause();
        apply_hit(grid, &hit, bintodec(GLOBAL), id);
        lessmajor(othergrid);
    }
    iswin(othergrid, grid, hit, win);
}

int firstgame(FILE *o, gid_t id)
{
    char **mygrid;
    char **othergrid;

    mygrid = creatgrid();
    othergrid = creatgrid();
    if (o == NULL)
        return (84);
    put_boat(o, mygrid);
    my_printf("my positions:\n");
    printgrid(mygrid);
    my_printf("enemy's positions:\n");
    printgrid(othergrid);
    gameloopfirst(mygrid, othergrid, id);
    return (0);
}

void my_handler1(int nbr, siginfo_t *info, void *context)
{
    GLOBAL = info->si_pid;
}

void my_reception(int nbr)
{
    if (nbr == SIGUSR1) {
        GLOBAL += 0;
    }
    else if (nbr == SIGUSR2) {
        GLOBAL += 1;
    }
    GLOBAL *= 10;
}

int firstplayer(char *string)
{
    FILE *o;
    struct sigaction sa;
    int id = 0;

    o = fopen(string, "r");
    my_printf("my_pid: %d\nwaiting for enemy connection...\n", getpid());
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction= my_handler1;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGUSR2, &sa, NULL);
    sigaction(SIGUSR1, &sa, NULL);
    while (1) {
        if (GLOBAL != 0) {
            my_printf("\nenemy connected\n\n");
            break;
        }
    }
    id = GLOBAL;
    kill(GLOBAL, SIGUSR2);
    return (firstgame(o, id));
}