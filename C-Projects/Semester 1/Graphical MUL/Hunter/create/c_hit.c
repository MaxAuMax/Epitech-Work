/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_hit.c
*/

#include "../include/my.h"

void c_hit(t_sprite *hit)
{
    hit->sp = sfSprite_create();
    hit->pos = (sfVector2f){460, 880};
    hit->scale = (sfVector2f){7.5, 4.25};
    hit->rect.top = 250;
    hit->rect.left = 525;
    hit->rect.width = 113;
    hit->rect.height = 18;
}
