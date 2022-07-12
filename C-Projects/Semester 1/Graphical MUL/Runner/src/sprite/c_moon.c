/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_moon.c
*/

#include "my.h"

void c_moon(t_sprite *moon)
{
    moon->sp = sfSprite_create();
    moon->texture = sfTexture_createFromFile("files/layers/moon.png", NULL);
    moon->pos = (sfVector2f){0, 0};
    moon->scale = (sfVector2f){1, 1};
    moon->rect.top = 0;
    moon->rect.left = 0;
    moon->rect.width = 1920;
    moon->rect.height = 1080;
}
