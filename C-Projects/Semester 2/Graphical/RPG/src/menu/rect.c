/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** rect.c
*/

#include "rpg.h"

void quitb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/quit.png", NULL);
    sprite->pos = (sfVector2f){840, 600};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 144;
    sprite->rect.height = 48;
}

void music_onb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/music.png", NULL);
    sprite->pos = (sfVector2f){275, 550};
    sprite->scale = (sfVector2f){2, 2};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 48;
    sprite->rect.height = 48;
}

void homeb (t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/home.png", NULL);
    sprite->pos = (sfVector2f){840, 500};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 144;
    sprite->rect.height = 48;
}

void resumeb (t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile("assets/menu/resume.png", NULL);
    sprite->pos = (sfVector2f){840, 400};
    sprite->scale = (sfVector2f){1.5, 1.5};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 144;
    sprite->rect.height = 48;
}
