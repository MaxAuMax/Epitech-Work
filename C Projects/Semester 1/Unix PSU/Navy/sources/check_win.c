/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** check_boats.c
*/

#include "../includes/my.h"

glb globe2;

void won(int sig)
{
    globe2.global = 0;
}

void lose(int sig)
{
    globe2.global = 1;
}

int who_won(variable *var)
{
    globe2.global = -1;

    while (globe2.global == 0) {
        signal(SIGUSR1, won);
        signal(SIGUSR2, lose);
    }
    usleep(1000);
    if (globe2.global == 1) {
        my_putstr("Enemy won\n\n");
        var->win = 1;
        return (1);
    } else if (globe2.global == 0) {
        my_putstr("I won\n\n");
        var->win = 0;
        return (0);
    } else {
        return (-1);
    }
}

void check_boats(variable *var, char *map, int pid)
{
    int missing = 0;

    for (int i = 36; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            i += 2;
        else if (map[i] >= '2' && map[i] <= '5')
            missing += 1;
    }
    if (missing == 0) {
        var->win = 0;
        kill(pid, SIGUSR1);
    } else
        kill(pid, SIGUSR2);
}