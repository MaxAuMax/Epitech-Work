/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** move.c
*/

#include "rpg.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left >= max_value) {
        rect->left = 0;
    } else
        rect->left += offset;
}

void move_sprite(sfSprite *sprite, int x, int y)
{
    sfVector2f move = {x, y};
    sfSprite_move(sprite, move);
}
