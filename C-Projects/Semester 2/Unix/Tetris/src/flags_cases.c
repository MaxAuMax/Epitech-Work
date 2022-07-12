/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** flags_cases.c
*/

#include "my.h"

int get_other(t_global *global, int fl)
{
    if (fl == -1)
        return (84);
    switch (fl) {
        case 'L':
            global->level = my_str_to_int(optarg);
            break;
        case 'l':
            global->key_left = my_str_to_int(optarg);
            break;
        case 'r':
            global->key_right = my_str_to_int(optarg);
            break;
        case 't':
            global->key_turn = my_str_to_int(optarg);
            break;
    }
    get_last(global, fl);
    return (0);
}

void get_last(t_global *global, int fl)
{
    switch (fl) {
        case 'd':
            global->key_drop = my_str_to_int(optarg);
            break;
        case 'q':
            global->key_quit = my_str_to_int(optarg);
            break;
        case 'p':
            global->key_pause = my_str_to_int(optarg);
            break;
        case 0:
            change_map(global, optarg);
            break;
        case 'w':
            global->show_next = true;
            break;
    }
    get_lasts(global, fl);
}

void get_lasts(t_global *global, int fl)
{
    switch (fl) {
        case 'D':
            global->debug = true;
            break;
        case 'h':
            usage(global->av);
            exit(0);
        case '?':
            exit(84);
    }
}
