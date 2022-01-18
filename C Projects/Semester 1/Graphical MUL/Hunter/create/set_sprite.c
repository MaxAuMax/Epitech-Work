/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** set_bg.c
*/

#include <SFML/Graphics.h>
#include "../include/my.h"

void set_sprite(t_sprite *sprite, t_sprite *bg)
{
    sfSprite_setScale(sprite->sp, sprite->scale);
    sfSprite_setPosition(sprite->sp, sprite->pos);
    sfSprite_setTexture(sprite->sp, bg->texture, sfFalse);
}

void set(t_global *global)
{
    set_sprite(&global->bg, &global->bg);
    set_sprite(&global->duck1, &global->bg);
    set_sprite(&global->shot, &global->bg);
    set_sprite(&global->dog, &global->bg);
    set_sprite(&global->hit, &global->bg);
    set_sprite(&global->round, &global->bg);
    set_sprite(&global->score, &global->bg);
    set_sprite(&global->hitr, &global->bg);
    set_sprite(&global->shotr, &global->bg);
}
