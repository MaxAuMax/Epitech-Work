/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** move_rect.c
*/

#include <SFML/Graphics.h>
#include "include/my.h"

void move_rect(t_sprite *sprite, int offset, int start, int max_value)
{
    if (sprite->rect.left >= max_value)
        sprite->rect.left = start;
    else
        sprite->rect.left = sprite->rect.left + offset;
}
