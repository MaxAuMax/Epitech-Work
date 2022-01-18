/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_cross.c
*/

#include "../include/my.h"

void c_cross(t_sprite *cross)
{
    cross->sp = sfSprite_create();
    cross->rect.top = 259;
    cross->rect.left = 468;
    cross->rect.width = 25;
    cross->rect.height = 23;
}
