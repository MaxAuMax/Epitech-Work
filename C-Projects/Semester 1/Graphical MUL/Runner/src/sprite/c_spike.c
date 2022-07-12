/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_spike.c
*/

#include "my.h"

void c_spike(t_sprite *spike)
{
    spike->sp = sfSprite_create();
    spike->texture = sfTexture_createFromFile("files/layers/spike.png", NULL);
    spike->pos = (sfVector2f){0, 0};
    spike->scale = (sfVector2f){1, 1};
    spike->rect.top = 0;
    spike->rect.left = 0;
    spike->rect.width = 3840;
    spike->rect.height = 1080;
}
