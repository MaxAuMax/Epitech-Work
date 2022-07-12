/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_tiles.c
*/

#include "my.h"

void c_tiles(t_sprite *tiles)
{
    tiles->sp = sfSprite_create();
    tiles->texture = sfTexture_createFromFile("files/layers/tiles.png", NULL);
    tiles->pos = (sfVector2f){0, 0};
    tiles->scale = (sfVector2f){1, 1};
    tiles->rect.top = 0;
    tiles->rect.left = 0;
    tiles->rect.width = 3840;
    tiles->rect.height = 1080;
}
