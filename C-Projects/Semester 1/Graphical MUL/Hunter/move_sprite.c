/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** move_sprite.c
*/

#include <SFML/Graphics.h>
#include "include/my.h"

void move_sprite(t_sprite *sprite, sfSprite *s, int max, int xx)
{
    int pass = 0;
    if (sprite->pos.x > max) {
        sprite->pos.x = -200;
        sprite->pos.y = rand()%151*4.25;
        randco(sprite);
    } else
        sprite->pos.x += xx;
    sfVector2f new = {sprite->pos.x, sprite->pos.y};
    sfSprite_setPosition(s, new);
}
