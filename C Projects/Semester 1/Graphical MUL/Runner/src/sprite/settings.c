/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** settings.c
*/

#include "my.h"

void draw_settings(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->select.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->back.sp, NULL);
}

void texture_settings(t_global *global)
{
    sfSprite_setTextureRect(global->select.sp, global->select.rect);
    sfSprite_setTextureRect(global->back.sp, global->back.rect);
}

void create_settings(t_global *global)
{
    c_select(&global->select);
    c_back(&global->back);
}
