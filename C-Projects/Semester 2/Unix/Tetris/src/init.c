/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** init.c
*/

#include "my.h"

void init_game(t_global *global)
{
    global->game = malloc(sizeof(t_game));
    global->game->stx = (COLS - global->map_w * 2) / 2;
    global->game->sty = (LINES - global->map_h) / 2;
    global->game->window = newwin(global->map_h,
    global->map_w * 2, global->game->sty, global->game->stx);
}

void init_score(t_global *global)
{
    global->score = malloc(sizeof(t_score));
    global->score->width = 40;
    global->score->height = 13;
    global->score->window = newwin(global->score->height,
    global->score->width, 10, 20);
    global->score->score = 0;
}

void init_next(t_global *global)
{
    global->next = malloc(sizeof(t_next));
    global->next->width = 15;
    global->next->height = 8;
    global->next->window = newwin(global->next->height,
    global->next->width, 24, 32);
}

void init_blocks(t_global *global)
{
    char **tab = read_directory("./tetriminos/", tab);
    t_blocks **blocks = malloc(sizeof(t_blocks *) * (my_strstrlen(tab) + 1));
    blocks[my_strstrlen(tab)] = NULL;
    global->blocks = blocks;
    read_tetrimino(global, tab);
    free_array(tab);
}

char **init_fallen(t_global *global)
{
    char **str = malloc(sizeof(char *) * 21);
    str[20] = NULL;
    for (int i = 0; str[i] != NULL; i++) {
        char *st = malloc(sizeof(char) * 21);
        st[20] = '\0';
        for (int j = 0; st[j] != '\0'; j++)
            st[j] = 'a';
        str[i] = st;
    }
    return (str);
}
