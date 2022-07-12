/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** receive_hit.c
*/

#include "../includes/my.h"

glb global;

void hit(int sig)
{
    my_putstr("hit\n\n");
    global.global = 2;
}

void missed(int sig)
{
    my_putstr("missed\n\n");
    global.global = 1;
}

void receive_hit(variable *var, char *map_en)
{
    global.global = 0;
    while (global.global == 0) {
        signal(SIGUSR1, hit);
        signal(SIGUSR2, missed);
    }
    if (global.global == 2)
        change_maps(map_en, 1, var->attack);
    else
        change_maps(map_en, 0, var->attack);
}
