/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** menu_rect.c
*/

#include "my.h"

void background_menu(t_sprite * sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/Sample.jpg", NULL);
    sprite->pos = (sfVector2f){0, 0};
    sprite->scale = (sfVector2f){2.3, 2.3};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 918;
    sprite->rect.height = 515;
}

void playb(t_sprite *playb)
{
    playb->sp = sfSprite_create();
    playb->texture = sfTexture_createFromFile("pics/menu/play.png", NULL);
    playb->pos = (sfVector2f){815, 320};
    playb->scale = (sfVector2f){1.5, 1.5};
    playb->rect.top = 0;
    playb->rect.left = 0;
    playb->rect.width = 190;
    playb->rect.height = 49;
}

void settingb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/settings.png", NULL);
    sprite->pos = (sfVector2f){840, 450};
    sprite->scale = (sfVector2f){1.2, 1.2};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}

void quitb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/quit.png", NULL);
    sprite->pos = (sfVector2f){840, 650};
    sprite->scale = (sfVector2f){1.2, 1.1};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 190;
    sprite->rect.height = 49;
}

void music_onb(t_sprite *sprite)
{
    sprite->sp = sfSprite_create();
    sprite->texture = sfTexture_createFromFile("pics/menu/Music_on.png", NULL);
    sprite->pos = (sfVector2f){225, 550};
    sprite->scale = (sfVector2f){0.25, 0.25};
    sprite->rect.top = 0;
    sprite->rect.left = 0;
    sprite->rect.width = 420;
    sprite->rect.height = 455;
}
