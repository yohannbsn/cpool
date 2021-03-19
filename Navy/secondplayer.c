/*
** EPITECH PROJECT, 2020
** secondp
** File description:
** secondp
*/

#include "include/sig.h"

void gameloopsecond(char **grid, char **othergrid, gid_t id)
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
        my_printf("\nwaiting for enemy's attack...\n");
        for (int i = 0; i <= 6; i++)
            pause();
        apply_hit(grid, &hit, bintodec(GLOBAL), id);
        lessmajor(othergrid);
        buff = goodhit(buff, buffsize);
        buff = my_bin(buff, othergrid, &myhit);
        my_signalsender(buff, id);
        istouch(myhit, othergrid, &win);
    }
    iswin(othergrid, grid, hit, win);
}

int secondgame(FILE *o, gid_t id)
{
    char **mygrid;
    char **othergrid;

    mygrid = creatgrid();
    othergrid = creatgrid();
    put_boat(o, mygrid);
    my_printf("my positions:\n");
    printgrid(mygrid);
    my_printf("enemy's positions:\n");
    printgrid(othergrid);
    gameloopsecond(mygrid, othergrid, id);
    return (0);
}

void my_handler2(int nbr, siginfo_t *info, void *context)
{
    GLOBAL = 0;
}

int secondplayer(char *string, gid_t id)
{
    FILE *o;
    struct sigaction sa;

    o = fopen(string, "r");
    my_printf("my_pid: %d\n", getpid());
    kill(id, SIGUSR2);
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction= my_handler2;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGUSR2, &sa, NULL);
    while (1) {
        if (GLOBAL == 0) {
            my_printf("sucessfully connected\n\n");
            break;
        }
    }
    return (secondgame(o, id));
}