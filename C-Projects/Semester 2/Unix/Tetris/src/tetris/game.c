/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** tetris.c
*/

#include "my.h"

void handle_moves(t_global *global, int ch)
{
    if (ch == global->key_right)
        move_right(global);
    if (ch == global->key_left)
        move_left(global);
}

void game(t_global *global)
{
    global->clock = clock();
    int sec_fall = 1, sec_score = 5;
    refresh();
    score_win(global);
    next_win(global);
    game_win(global);
    int ch;
    while ((ch = getch()) != global->key_quit) {
        handle_moves(global, ch);
        clock_t end = clock();
        char *str = my_int_to_str(sec_fall - 1);
        mvwaddstr(global->score->window, 10, 30, str);
        free(str);
        int elapsed = (end - global->clock) / CLOCKS_PER_SEC;
        sec_fall = second_passed(global, elapsed, sec_fall);
        sec_score = increase_score(global, elapsed, sec_score);
        wrefresh(global->score->window);
        wrefresh(global->game->window);
    }
}
