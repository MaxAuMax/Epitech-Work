/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_shot.c
*/

#include "../include/my.h"

void c_shot(t_sprite *shot)
{
    shot->sp = sfSprite_create();
    shot->texture = sfTexture_createFromFile("files/sprites.png", NULL);
    shot->pos = (sfVector2f){165, 880};
    shot->scale = (sfVector2f){7.5, 4.25};
    shot->rect.top = 261;
    shot->rect.left = 497;
    shot->rect.width = 26;
    shot->rect.height = 17;
}
