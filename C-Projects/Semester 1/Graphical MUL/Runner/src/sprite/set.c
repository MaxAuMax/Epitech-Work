/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** basic.c
*/

#include "my.h"

void set_sprite(t_sprite sprite)
{
    sfSprite_setScale(sprite.sp, sprite.scale);
    sfSprite_setPosition(sprite.sp, sprite.pos);
    sfSprite_setTexture(sprite.sp, sprite.texture, sfFalse);
}

void set_game(t_global *global)
{
    set_sprite(global->moon);
    set_sprite(global->spike);
    set_sprite(global->demon);
    set_sprite(global->tiles);
    set_sprite(global->ghost);
}

void set_menu(t_global *global)
{
    set_sprite(global->menu_bg);
    set_sprite(global->title);
    set_sprite(global->play);
    set_sprite(global->settings);
    set_sprite(global->quit);
}

void set_settings(t_global *global)
{
    set_sprite(global->select);
    set_sprite(global->back);
}
