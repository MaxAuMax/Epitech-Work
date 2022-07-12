/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_menu_but2.c
*/

#include "my.h"

void c_resume(t_sprite *resume)
{
    resume->sp = sfSprite_create();
    resume->texture = sfTexture_createFromFile("files/menu/buttons.png", NULL);
    resume->pos = (sfVector2f){0, 0};
    resume->scale = (sfVector2f){1, 1};
    resume->rect.top = 0;
    resume->rect.left = 0;
    resume->rect.width = 600;
    resume->rect.height = 200;
}

void c_back(t_sprite *back)
{
    back->sp = sfSprite_create();
    back->texture = sfTexture_createFromFile("files/menu/buttons.png", NULL);
    back->pos = (sfVector2f){1265, 800};
    back->scale = (sfVector2f){0.6, 0.6};
    back->rect.top = 834;
    back->rect.left = 0;
    back->rect.width = 600;
    back->rect.height = 200;
}

void c_arrows(t_sprite *arrows)
{
    arrows->sp = sfSprite_create();
    arrows->texture = sfTexture_createFromFile("files/menu/buttons.png", NULL);
    arrows->pos = (sfVector2f){0, 0};
    arrows->scale = (sfVector2f){1, 1};
    arrows->rect.left = 1216;
    arrows->rect.top = 834;
    arrows->rect.width = 200;
    arrows->rect.height = 200;
}

void c_select(t_sprite *select)
{
    select->sp = sfSprite_create();
    select->texture = sfTexture_createFromFile("files/player/select.png", NULL);
    select->pos = (sfVector2f){0, -30};
    select->scale = (sfVector2f){1, 1};
    select->rect.top = 0;
    select->rect.left = 0;
    select->rect.width = 1920;
    select->rect.height = 1080;
}
