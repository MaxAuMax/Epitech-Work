/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** flags.c
*/

#include "my.h"

void init_flags(t_global *global, int ac, char **av)
{
    global->level = 1;
    global->key_drop = 258;
    global->key_turn = 259;
    global->key_left = 260;
    global->key_right = 261;
    global->key_quit = 113;
    global->key_pause = 32;
    global->map_h = 20;
    global->map_w = 10;
    global->show_next = false;
    global->debug = false;
    global->err = false;
}

void change_map(t_global *global, char *str)
{
    int fst = 0;
    for (; str[fst] != ','; fst++);
    int snd = fst;
    for (; str[snd] != '\0'; snd++);

    char *height = malloc(fst + 1);
    char *width = malloc(snd + 1);
    int i = 0;
    for (; i < fst; i++)
        height[i] = str[i];
    height[i] = '\0';
    i++;
    int idx = 0;
    for (; str[i] != '\0'; i++, idx++)
        width[idx] = str[i];
    width[idx] = '\0';
    global->map_h = my_str_to_int(height);
    global->map_w = my_str_to_int(width);
}

void get_flags(t_global *global, int ac, char **av)
{
    while (1) {
        int map = 0, idx = 0, fl = 0, help = 0;
        struct option opt[] = {
            {"help", no_argument, 0, 'h'},
            {"level", required_argument, 0, 'L'},
            {"key-left", required_argument, 0, 'l'},
            {"key-right", required_argument, 0, 'r'},
            {"key-turn", required_argument, 0, 't'},
            {"key-drop", required_argument, 0, 'd'},
            {"key-quit", required_argument, 0, 'q'},
            {"key-pause", required_argument, 0, 'p'},
            {"map-size", required_argument, &map, 0},
            {"without-next", no_argument, 0, 'w'},
            {"debug", no_argument, 0, 'D'}
        };
        int r = 0;
        fl = getopt_long(ac, av, "L:l:r:t:d:q:p:wD", opt, &idx);
        if ((r = get_other(global, fl)) == 84)
            break;
    }
}
