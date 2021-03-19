/*
** EPITECH PROJECT, 2020
** sig
** File description:
** sig
*/

#ifndef sig_h
#define sig_h

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "../lib/my/my.h"
#define _XOPEN_SOURCE 700

int firstplayer(char *string);
void istouch(int myhit, char **othergrid, int *win);
int secondplayer(char *string, gid_t id);
void my_handler(int nbr, siginfo_t *info, void *context);
void put_boat(FILE *o, char **grid);
void printgrid(char **grid);
char **creatgrid(void);
int firstgame(FILE *o, gid_t id);
int secondgame(FILE *o, gid_t id);
void gameloop(char **grid, char **othergrid, gid_t id);
void my_signalsender(char *string, gid_t id);
char *my_bin(char *buff, char **othergrid, int *myhit);
void my_reception(int nbr);
int bintodec(int bin);
void apply_hit(char **my_grid, int *hit, int coord, gid_t id);
void check_hit (char **grid, int hit, int x, int y);
char *goodhit(char *buff, size_t buffsize);
void iswin(char **othergrid, char** mygrid, int hit, int win);
int errorline(char *av);
void lessmajor(char **othergrid);

extern int GLOBAL;
#endif /* !sig */
