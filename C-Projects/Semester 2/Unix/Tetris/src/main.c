/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

void init(t_global *global, int ac, char **av)
{
    init_next(global);
    init_score(global);
    init_game(global);
    init_blocks(global);
    global->map = init_fallen(global);
    curs_set(0);
}

void free_game(t_global *global)
{
    free(global->game);
    free(global->score);
    free(global->next);
    free(global->blocks);
    free(global->map);
}

void launch_game(t_global *global, int ac, char **av)
{
    initscr();
    noecho();
    keypad(stdscr, true);
    nodelay(stdscr, true);
    init(global, ac, av);
    game(global);
    endwin();
    free_game(global);
}

int main(int ac, char **av)
{
    t_global *global = malloc(sizeof(t_global));
    global->av = av;
    if (ac == 0)
        launch_game(global, ac, av);
    else {
        init_flags(global, ac, av);
        get_flags(global, ac, av);
        if (global->debug)
            debug(global);
        else
            launch_game(global, ac, av);
    }
    free(global);
    return (0);
}
