/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** menu.c
*/

#include "my.h"

void draw_menu(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->menu_bg.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->title.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->play.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->settings.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->quit.sp, NULL);
}

void texture_menu(t_global *global)
{
    sfSprite_setTextureRect(global->menu_bg.sp, global->menu_bg.rect);
    sfSprite_setTextureRect(global->title.sp, global->title.rect);
    sfSprite_setTextureRect(global->play.sp, global->play.rect);
    sfSprite_setTextureRect(global->settings.sp, global->settings.rect);
    sfSprite_setTextureRect(global->quit.sp, global->quit.rect);
}

void create_menu(t_global *global)
{
    c_menu_bg(&global->menu_bg);
    c_title(&global->title);
    c_play(&global->play);
    c_settings(&global->settings);
    c_quit(&global->quit);
}
