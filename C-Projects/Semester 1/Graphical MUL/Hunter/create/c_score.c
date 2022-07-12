/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_score.c
*/

#include "../include/my.h"

void c_score(t_sprite *score)
{
    score->sp = sfSprite_create();
    score->pos = (sfVector2f){1420, 880};
    score->scale = (sfVector2f){7.5, 4.25};
    score->rect.top = 248;
    score->rect.left = 377;
    score->rect.width = 49;
    score->rect.height = 17;
}