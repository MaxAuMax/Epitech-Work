/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_menu_bg.c
*/

#include "my.h"

void c_menu_bg(t_sprite *bg)
{
    bg->sp = sfSprite_create();
    bg->texture = sfTexture_createFromFile("files/preview.png", NULL);
    bg->pos = (sfVector2f){0, 0};
    bg->scale = (sfVector2f){1, 1};
    bg->rect.top = 0;
    bg->rect.left = 0;
    bg->rect.width = 1920;
    bg->rect.height = 1080;
}
