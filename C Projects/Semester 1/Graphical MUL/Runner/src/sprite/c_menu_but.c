/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_menu_but.c
*/

#include "my.h"

void c_title(t_sprite *title)
{
    title->sp = sfSprite_create();
    title->texture = sfTexture_createFromFile("files/menu/title.png", NULL);
    title->pos = (sfVector2f){-20, 0};
    title->scale = (sfVector2f){1, 1};
    title->rect.top = 0;
    title->rect.left = 0;
    title->rect.width = 1920;
    title->rect.height = 1080;
}

void c_play(t_sprite *play)
{
    play->sp = sfSprite_create();
    play->texture = sfTexture_createFromFile("files/menu/buttons.png", NULL);
    play->pos = (sfVector2f){760, 370};
    play->scale = (sfVector2f){0.6, 0.6};
    play->rect.top = 0;
    play->rect.left = 0;
    play->rect.width = 600;
    play->rect.height = 200;
}

void c_settings(t_sprite *settings)
{
    settings->sp = sfSprite_create();
    settings->texture =
        sfTexture_createFromFile("files/menu/buttons.png", NULL);
    settings->pos = (sfVector2f){805, 540};
    settings->scale = (sfVector2f){0.45, 0.45};
    settings->rect.top = 417;
    settings->rect.left = 0;
    settings->rect.width = 600;
    settings->rect.height = 200;
}

void c_quit(t_sprite *quit)
{
    quit->sp = sfSprite_create();
    quit->texture = sfTexture_createFromFile("files/menu/buttons.png", NULL);
    quit->pos = (sfVector2f){805, 680};
    quit->scale = (sfVector2f){0.45, 0.42};
    quit->rect.top = 625;
    quit->rect.left = 0;
    quit->rect.width = 600;
    quit->rect.height = 200;
}
