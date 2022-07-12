/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** restart.c
*/

#include "my.h"

void restart(GLOBAL *global)
{
    global->player->posx = global->player->st_x;
    global->player->posy = global->player->st_y;
    for (int i = 0; global->all_crosses[i] != NULL; i++) {
        global->all_crosses[i]->posx = global->all_crosses[i]->st_x;
        global->all_crosses[i]->posy = global->all_crosses[i]->st_y;
    }
}