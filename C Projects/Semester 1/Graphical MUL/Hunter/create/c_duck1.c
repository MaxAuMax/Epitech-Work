/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_duck1.c
*/

#include "../include/my.h"

void c_duck1(t_sprite *duck1)
{
    duck1->sp = sfSprite_create();
    duck1->pos = (sfVector2f){0, rand()%151*4.25};
    duck1->scale = (sfVector2f){3.5, 3.5};
    duck1->rect.top = 170;
    duck1->rect.left = 7;
    duck1->rect.width = 35;
    duck1->rect.height = 34;
}
