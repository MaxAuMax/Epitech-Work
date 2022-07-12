/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** seconds.c
*/

#include "my.h"

int check_sec(t_global *global, int i)
{
    if (global->blocks[4]->stars[i]->y >= global->map_h - 1) {
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
            global->blocks[4]->stars[i]->y--;
        return (-1);
    }
    return (0);
}

int second_passed(t_global *global, int elapsed, int sec)
{
    if (elapsed == sec) {
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++) {
            mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
            global->blocks[4]->stars[i]->x, ' ');
            global->blocks[4]->stars[i]->y++;
        }
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
            if (check_sec(global, i) == -1) break;
        for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
            mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
            global->blocks[4]->stars[i]->x, '*');
        wrefresh(global->game->window);
        sec += 1;
    }
    return (sec);
}

int increase_score(t_global *global, int elapsed, int sec)
{
    if (elapsed == sec) {
        global->score->score += 5;
        mvwaddstr(global->score->window, 3, 30,
            my_int_to_str(global->score->score));
        wrefresh(global->score->window);
        sec += 5;
    }
    return (sec);
}
