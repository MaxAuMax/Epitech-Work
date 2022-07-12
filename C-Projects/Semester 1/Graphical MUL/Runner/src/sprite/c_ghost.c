/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** c_ghost.c
*/

#include "my.h"

void c_ghost(t_sprite *ghost)
{
    ghost->sp = sfSprite_create();
    ghost->texture = sfTexture_createFromFile("files/player/ghost.png", NULL);
    ghost->pos = (sfVector2f){0, 750};
    ghost->scale = (sfVector2f){6, 6};
    ghost->rect.top = 43;
    ghost->rect.left = 10;
    ghost->rect.width = 26;
    ghost->rect.height = 29;
}
