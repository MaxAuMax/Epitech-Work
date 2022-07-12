/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** menu_rect2.c
*/

#include "my.h"

void title_menu_rect(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/title.png", NULL);
    sprite->pos = (sfVector2f){0, 0};
    sprite->scale = (sfVector2f){1, 1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 1920;
    sprite->rect.height = 1080;
}

void sound_onb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/effect.png", NULL);
    sprite->pos = (sfVector2f){1550, 550};
    sprite->scale = (sfVector2f){0.25, 0.25};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 455;
}

void background_setting(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/bcg_set.jpg", NULL);
    sprite->pos = (sfVector2f){0, 0};
    sprite->scale = (sfVector2f){1, 1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 1920;
    sprite->rect.height = 1080;
}

void fps30(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/FPS.png", NULL);
    sprite->pos = (sfVector2f){850, 550};
    sprite->scale = (sfVector2f){0.1, 0.1};
    sprite->rect.top = 453;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 453;
}

void fps60(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/FPS.png", NULL);
    sprite->pos = (sfVector2f){932, 550};
    sprite->scale = (sfVector2f){0.1, 0.1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 453;
}
