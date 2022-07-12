/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_hit2.c
*/

#include "../include/my.h"

void c_hitr(t_sprite *hitr)
{
    hitr->sp = sfSprite_create();
    hitr->pos = (sfVector2f){460, 880};
    hitr->scale = (sfVector2f){7.5, 4.25};
    hitr->rect.top = 270;
    hitr->rect.left = 525;
    hitr->rect.width = 33;
    hitr->rect.height = 18;
}
