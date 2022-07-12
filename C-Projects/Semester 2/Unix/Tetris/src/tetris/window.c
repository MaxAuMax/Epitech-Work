/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** window.c
*/

#include "my.h"

void score_win(t_global *global)
{
    box(global->score->window, ACS_VLINE, ACS_HLINE);
    mvwaddstr(global->score->window, 2, 2, "High Score :");
    mvwaddstr(global->score->window, 2, 30, "0    pts");
    mvwaddstr(global->score->window, 3, 2, "Score :");
    mvwaddstr(global->score->window, 3, 30, "0    pts");
    mvwaddstr(global->score->window, 6, 2, "Lines :");
    mvwaddstr(global->score->window, 6, 30, "0");
    mvwaddstr(global->score->window, 7, 2, "Level :");
    mvwaddstr(global->score->window, 7, 30, "1");
    mvwaddstr(global->score->window, 10, 2, "Timer :");
    mvwaddstr(global->score->window, 10, 30, "0    s");
    wrefresh(global->score->window);
}

void next_win(t_global *global)
{
    box(global->next->window, ACS_VLINE, ACS_HLINE);
    mvwaddstr(global->next->window, 0, 5, "Next:");
    mvwaddstr(global->next->window, 3, 7, "*");
    wrefresh(global->next->window);
}

void game_win(t_global *global)
{
    box(global->game->window, ACS_VLINE, ACS_HLINE);
    for (int i = 0; global->blocks[4]->stars[i] != NULL; i++)
        mvwaddch(global->game->window, global->blocks[4]->stars[i]->y,
        global->blocks[4]->stars[i]->x, '*');
    wrefresh(global->game->window);
}
