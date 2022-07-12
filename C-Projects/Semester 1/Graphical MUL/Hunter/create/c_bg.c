/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_bg.c
*/

#include "../include/my.h"

void c_bg(t_sprite *bg)
{
    bg->sp = sfSprite_create();
    bg->texture = sfTexture_createFromFile("files/sprites.png", NULL);
    bg->pos = (sfVector2f){0, 0};
    bg->scale = (sfVector2f){7.5, 4.25};
    bg->rect.top = 5;
    bg->rect.left = 383;
    bg->rect.width = 256;
    bg->rect.height = 240;
}
