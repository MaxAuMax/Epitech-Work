/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** texture.c
*/

#include <SFML/Graphics.h>
#include "include/my.h"

void texture(t_global *global)
{
    sfSprite_setTextureRect(global->bg.sp, global->bg.rect);
    sfSprite_setTextureRect(global->duck1.sp, global->duck1.rect);
    sfSprite_setTextureRect(global->shot.sp, global->shot.rect);
    sfSprite_setTextureRect(global->dog.sp, global->dog.rect);
    sfSprite_setTextureRect(global->hit.sp, global->hit.rect);
    sfSprite_setTextureRect(global->round.sp, global->round.rect);
    sfSprite_setTextureRect(global->score.sp, global->score.rect);
    sfSprite_setTextureRect(global->hitr.sp, global->hitr.rect);
    sfSprite_setTextureRect(global->cross.sp, global->cross.rect);
    sfSprite_setTextureRect(global->shotr.sp, global->shotr.rect);
}
