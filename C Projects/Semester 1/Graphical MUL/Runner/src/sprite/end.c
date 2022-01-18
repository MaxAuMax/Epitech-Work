/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** end.c
*/

#include "my.h"

void draw_victory(t_global *global)
{
    sfRenderWindow_drawText(global->window.window, global->victory.text, NULL);
}

void draw_death(t_global *global)
{
    sfRenderWindow_drawText(global->window.window, global->death.text, NULL);
}

void create_end(t_global *global)
{
    c_death(&global->death);
    c_victory(&global->victory);
}
