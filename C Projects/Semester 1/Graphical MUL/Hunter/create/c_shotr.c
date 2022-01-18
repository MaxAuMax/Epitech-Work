/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_shotr.c
*/

#include "../include/my.h"

void c_shotr(t_sprite *shotr)
{
    shotr->sp = sfSprite_create();
    shotr->texture = sfTexture_createFromFile("files/sprites.png", NULL);
    shotr->pos = (sfVector2f){165, 880};
    shotr->scale = (sfVector2f){7.5, 4.25};
    shotr->rect.top = 267;
    shotr->rect.left = 430;
    shotr->rect.width = 26;
    shotr->rect.height = 17;
}
