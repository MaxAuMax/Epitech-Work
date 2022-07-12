/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** menu_rect3.c
*/

#include "my.h"

void fps120(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/FPS.png", NULL);
    sprite->pos = (sfVector2f){1022, 550};
    sprite->scale = (sfVector2f){0.1, 0.1};
    sprite->rect.top = 453;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 453;
}

void returnb(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/return.png", NULL);
    sprite->pos = (sfVector2f){1835, 957};
    sprite->scale = (sfVector2f){0.15, 0.15};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 455;
}

void aboutb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/about.png", NULL);
    sprite->pos = (sfVector2f){840, 550};
    sprite->scale = (sfVector2f){1.2, 1.1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}

void background_aboutb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/bcg_about.png",
    NULL);
    sprite->pos = (sfVector2f){0, 0};
    sprite->scale = (sfVector2f){1, 1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 1920;
    sprite->rect.height = 1080;
}

void background_pause(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/bcg_pause.png",
    NULL);
    sprite->pos = (sfVector2f){0, 0};
    sprite->scale = (sfVector2f){1, 1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 1920;
    sprite->rect.height = 1080;
}
