/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** c_dog.c
*/

#include "../include/my.h"

void c_dog(t_sprite *dog)
{
    dog->sp = sfSprite_create();
    dog->scale = (sfVector2f){3.5, 3.5};
    dog->pos = (sfVector2f){15, 650};
    dog->rect.top = 70;
    dog->rect.left = 136;
    dog->rect.width = 39;
    dog->rect.height = 47;
}
