/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** attack.c
*/

#include "../includes/my.h"

int check_pos(char *attack)
{
    if (attack[0] < 'A' || attack[0] > 'H')
        return (84);
    if (attack[1] < '1' || attack[1] > '8')
        return (84);
    return (0);
}

int check_hit(variable *var, char *map, char *map_en, int pid)
{
    int deb_map = 36;
    int len_line = 18;
    int x1 = var->attack[0];
    int y1 = var->attack[1] - '0';
    int p = deb_map + (len_line * (y1 - 1)) + ((x1 - 65) * 2) + 2;

    if (map[p] == '.') {
        var->message = "missed\n";
        kill(pid, SIGUSR2);
        change_maps(map, 0, var->attack);
        usleep(5000);
    } else if (map[p] >= '1' && map[p] <= '9') {
        var->message = "hit\n";
        kill(pid, SIGUSR1);
        change_maps(map, 1, var->attack);
        usleep(5000);
    } else
        return (84);

    return (0);
}

void send_attack(variable *var, int pid)
{
    int letter = var->attack[0];
    letter -= 64;
    int num = var->attack[1];
    num -= 48;

    for (int i = 0; letter > 0; letter--) {
        kill(pid, SIGUSR1);
        usleep(2000);
    }
    kill(pid, SIGUSR2);
    usleep(2000);
    for (int y = 0; num > 0; num--) {
        kill(pid, SIGUSR1);
        usleep(2000);
    }
    usleep(2000);
    kill(pid, SIGUSR2);
}