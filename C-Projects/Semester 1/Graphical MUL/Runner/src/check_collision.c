/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** check_collision.c
*/

#include "my.h"

void check_collision(t_global *global)
{
    for (int i = 0; i < global->len; i++) {
        sfFloatRect enemy = sfSprite_getGlobalBounds(global->enemies[i]->sp);
        sfFloatRect ghost = sfSprite_getGlobalBounds(global->ghost.sp);
        if (sfFloatRect_intersects(&enemy, &ghost, sfFalse)) {
            global->status = 3;
        }
    }
}
