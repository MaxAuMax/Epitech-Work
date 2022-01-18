/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_round.c
*/

#include "../include/my.h"

void c_round(t_sprite *round)
{
    round->sp = sfSprite_create();
    round->texture = sfTexture_createFromFile("files/sprites.png", NULL);
    round->pos = (sfVector2f){173, 816};
    round->scale = (sfVector2f){7.5, 4.25};
    round->rect.top = 255;
    round->rect.left = 431;
    round->rect.width = 24;
    round->rect.height = 8;
}
