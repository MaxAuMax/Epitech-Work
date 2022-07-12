/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

void free_all(infos *info, t_crosses **all_crosses, PLAYER *player)
{
    free(info->map);
    free(info);
    free(player);
    for (int idx = 0; all_crosses[idx] != NULL; idx++)
        free(all_crosses[idx]);
    free(all_crosses);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    if (ac == 2) {
        initscr();
        noecho();
        keypad(stdscr, true);
        GLOBAL *global = malloc(sizeof(GLOBAL));
        init_all(global, av);
        my_sokoban(global);
        endwin();
        free_all(global->info, global->all_crosses, global->player);
    } else {
        usage();
        return (84);
    }
    return (0);
}
