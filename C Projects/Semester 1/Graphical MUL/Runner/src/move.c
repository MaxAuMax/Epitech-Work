/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** move.c
*/

#include "my.h"

void move_rect(t_sprite *sprite, int offset, int start, int max_value)
{
    if (sprite->rect.left >= max_value)
        sprite->rect.left = start;
    else
        sprite->rect.left = sprite->rect.left + offset;
}

void move_sprite(t_sprite *sprite, sfSprite *s, int min)
{
    if (sprite->pos.x < min) {
        sprite->pos.x = -5000;
    } else
        sprite->pos.x -= 6;
    sfVector2f new = {sprite->pos.x, sprite->pos.y};
    sfSprite_setPosition(s, new);
}
