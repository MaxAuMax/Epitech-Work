/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** runner.c
*/

#include "my.h"

void launch_it(t_global *global, char *map)
{
    create_game(global);
    create_menu(global);
    create_settings(global);
    create_end(global);
    analyse_map(global, map);
    set_game(global);
    set_menu(global);
    set_settings(global);
    launch_music(global);
}

void my_runner(t_global *global, char *map)
{
    global->status = 0;
    launch_it(global, map);

    while (sfRenderWindow_isOpen(global->window.window)) {
        if (global->status == 0)
            menu(global);
        if (global->status == 1)
            game(global);
        if (global->status == 2)
            settings(global);
        if (global->status == 3)
            death(global);
        if (global->status == 4)
            victory(global);
    }
}
