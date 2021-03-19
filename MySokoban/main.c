/*
** EPITECH PROJECT, 2021
** my_Sokoban
** File description:
** main
*/

#include "includes/sokoban.h"

int main(int ac, char **av)
{
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			helper();
			exit(0);
		}
		my_sokoban(av[1]);
	} else {
		return (84);
	}
}