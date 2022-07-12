/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** createmenu.c
*/

#include "my.h"

void menu(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_menu(global);
    texture_menu(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_menu(global);
}

void menu_settings(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_setting(global);
    texture_settings(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_settings(global);
}

void menu_about(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_about(global);
    texture_about(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_about(global);
}

void menu_pause(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_pause(global);
    texture_pause(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_pause(global);
}
