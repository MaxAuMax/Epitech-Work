/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** rect2.c
*/

#include "rpg.h"

void sound_onb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/se.png", NULL);
    sprite->pos = (sfVector2f){1625, 550};
    sprite->scale = (sfVector2f){2, 2};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 48;
    sprite->rect.height = 48;
}

void fps30(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/fps.png", NULL);
    sprite->pos = (sfVector2f){790, 550};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 48;
    sprite->rect.left = 0;
    sprite->rect.width = 48;
    sprite->rect.height = 48;
}

void fps60(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/fps.png", NULL);
    sprite->pos = (sfVector2f){930, 550};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 48;
    sprite->rect.height = 48;
}

void fps120(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/fps.png", NULL);
    sprite->pos = (sfVector2f){1075, 550};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 48;
    sprite->rect.left = 0;
    sprite->rect.width = 48;
    sprite->rect.height = 48;
}

void returnb(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr =
    sfTexture_createFromFile("assets/menu/arrow_right.png", NULL);
    sprite->pos = (sfVector2f){1835, 957};
    sprite->scale = (sfVector2f){5, 5};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 14;
    sprite->rect.height = 10;
}
