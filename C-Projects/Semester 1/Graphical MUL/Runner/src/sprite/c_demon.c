/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_demon.c
*/

#include "my.h"

void c_demon(t_sprite *demon)
{
    demon->sp = sfSprite_create();
    demon->texture = sfTexture_createFromFile("files/layers/demon.png", NULL);
    demon->pos = (sfVector2f){0, 0};
    demon->scale = (sfVector2f){1, 1};
    demon->rect.top = 0;
    demon->rect.left = 0;
    demon->rect.width = 5760;
    demon->rect.height = 1080;
}
