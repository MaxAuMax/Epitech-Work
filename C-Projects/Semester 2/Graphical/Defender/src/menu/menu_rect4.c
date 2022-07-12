/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** menu_rect4.c
*/

#include "my.h"

void homeb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/home.png", NULL);
    sprite->pos = (sfVector2f){840, 450};
    sprite->scale = (sfVector2f){1.2, 1.2};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}
void resumeb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/resume.png", NULL);
    sprite->pos = (sfVector2f){837, 350};
    sprite->scale = (sfVector2f){1.2, 1.3};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}

void quitb2(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/quit.png", NULL);
    sprite->pos = (sfVector2f){840, 550};
    sprite->scale = (sfVector2f){1.2, 1.1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}
