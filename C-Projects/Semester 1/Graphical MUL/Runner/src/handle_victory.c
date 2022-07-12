/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** status_victory.c
*/

#include "my.h"

void death(t_global *global)
{
    sfMusic_stop(global->music);
    sfRenderWindow_display(global->window.window);
    events_end(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_death(global);
}

void victory(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_end(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_victory(global);
}
