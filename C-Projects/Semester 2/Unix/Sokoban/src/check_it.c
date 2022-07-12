/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** check_it.c
*/

#include "my.h"

char check_char(infos *info, char x, char y)
{
    return (info->map[info->width * y + x]);
}

int check_cross(t_crosses **all_crosses, int x, int y)
{
    for (int i = 0; all_crosses[i] != NULL; i++) {
        if (all_crosses[i]->posx == x && all_crosses[i]->posy == y)
            return (i);
    }
    return (-1);
}

void confirm_win(GLOBAL *global)
{
    mvwprintw(global->window, 0, 0, global->info->map);
    for (int idx = 0; global->all_crosses[idx] != NULL; idx++)
        mvwaddch(global->window, global->all_crosses[idx]->posy,
            global->all_crosses[idx]->posx, 'X');
    mvwaddch(global->window, global->player->posy, global->player->posx,
        'P');
    wrefresh(global->window);
    shutdown(global->info);
    exit (0);
}

void check_win(GLOBAL *global)
{
    int placed = 0;
    for (int i = 0; global->all_place[i] != NULL; i++) {
        for (int y = 0; global->all_crosses[y] != NULL; y++) {
            if (global->all_place[i]->posx == global->all_crosses[y]->posx
                && global->all_place[i]->posy == global->all_crosses[y]->posy)
                placed++;
        }
    }
    if (placed == global->all_place[0]->max) {
        confirm_win(global);
    }
}
