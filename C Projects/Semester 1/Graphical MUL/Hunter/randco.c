/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** randco.c
*/

#include "include/my.h"

void randco(t_sprite *sprite)
{
    int res = rand()%3;
    if (res == 0)
        sprite->rect.top = 170 - 42;
    else if (res == 2)
        sprite->rect.top = 170 + 42;
    else
        sprite->rect.top = 170;
}