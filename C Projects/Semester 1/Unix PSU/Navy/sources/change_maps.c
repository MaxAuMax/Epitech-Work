/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** change_maps.c
*/

#include "../includes/my.h"

void change_maps(char *map, int message, char *attack)
{
    int deb_map = 36;
    int len_line = 18;
    int x1 = attack[0];
    int y1 = attack[1] - '0';
    int p = deb_map + (len_line * (y1 - 1)) + ((x1 - 65) * 2) + 2;

    if (message == 1) {
        map[p] = 'x';
    } else {
        map[p] = 'o';
    }
}
