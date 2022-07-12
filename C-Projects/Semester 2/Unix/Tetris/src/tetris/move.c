/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** move.c
*/

#include "my.h"

int check_right(t_global *global, int i)
{
    if (global->blocks[4]->stars[i]->x >= global->map_w * 2 - 1) {
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
            global->blocks[4]->stars[i]->x--;
        return (-1);
    }
    return (0);
}

void move_right(t_global *global)
{
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++) {
            mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
            global->blocks[4]->stars[i]->x, ' ');
            global->blocks[4]->stars[i]->x++;
    }
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
        if (check_right(global, i) == -1) break;
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
        mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
        global->blocks[4]->stars[i]->x, '*');
    wrefresh(global->game->window);
}

int check_left(t_global *global, int i)
{
    if (global->blocks[4]->stars[i]->x <= 0) {
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
            global->blocks[4]->stars[i]->x++;
        return (-1);
    }
    return (0);
}

void move_left(t_global *global)
{
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++) {
            mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
            global->blocks[4]->stars[i]->x, ' ');
            global->blocks[4]->stars[i]->x--;
    }
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
        if (check_left(global, i) == -1) break;
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
        mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
        global->blocks[4]->stars[i]->x, '*');
    wrefresh(global->game->window);
}

void move_drop(t_global *global)
{
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++) {
        mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
        global->blocks[4]->stars[i]->x, ' ');
        global->blocks[4]->stars[i]->y = global->map_h - 2;
        mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
        global->blocks[4]->stars[i]->x, '*');
    }
    wrefresh(global->game->window);
}
