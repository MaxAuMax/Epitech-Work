/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** rect.c
*/

#include "my.h"

void gshop(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/game/shop.png", NULL);
    sprite->pos = (sfVector2f){500, -50};
    sprite->scale = (sfVector2f){1, 1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 1920;
    sprite->rect.height = 1080;
}

void shopb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/game/shopb.png", NULL);
    sprite->pos = (sfVector2f){1840, 940};
    sprite->scale = (sfVector2f){0.15, 0.15};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 455;
}

void spawnb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/game/spawnb.png", NULL);
    sprite->pos = (sfVector2f){20, 915};
    sprite->scale = (sfVector2f){0.22, 0.22};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 455;
}
