/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** receive.c
*/

#include "../includes/my.h"

glb globe1;

void stop_it(int sig)
{
    globe1.global = -1;
}

void up_by_one(int sig)
{
    globe1.global += 1;
}

int receive_attack(variable *var)
{
    globe1.global = 0;
    int i = 0;
    while (i < 2) {
        signal(SIGUSR1, up_by_one);
        signal(SIGUSR2, stop_it);
        if (globe1.global == -1) {
            i += 1;
            globe1.global = 0;
        }
        if (i == 0) {
            var->attack[i] = globe1.global + 64;
        } else {
            var->attack[i] = globe1.global + 48;
        }
    }
    var->attack[2] = '\0';
    return (1);
}
