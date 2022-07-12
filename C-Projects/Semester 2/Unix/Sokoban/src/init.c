/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** init.c
*/

#include "my.h"

void init_all(GLOBAL *global, char **av)
{
    global->info = malloc(sizeof(infos));
    init_info(global->info, av[1]);
    global->all_place = init_place(global->info);
    global->all_crosses = init_cross(global->info);
    global->window = newwin(global->info->height, global->info->width,
        global->info->sty, global->info->stx);
    global->player = malloc(sizeof(PLAYER));
}

void init_player(PLAYER *player, char *cha, infos *info)
{
    player->cha = cha;
    int y = 0, x = 0, i = 0;
    for (i = 0; info->map[i] != 'P'; i++) {
        if (info->map[i] == '\n') {
            y++;
            x = -1;
        }
        x++;
    }
    info->map[i] = ' ';
    player->posx = x;
    player->posy = y;
    player->st_x = x;
    player->st_y = y;
}

void init_info(infos *info, char *av)
{
    info->map = read_map(av, info);
    info->width = getwidth(info->map) + 1;
    info->height = getheight(info->map);
    info->stx = (COLS - info->width) / 2;
    info->sty = (LINES - info->height) / 2;
}
