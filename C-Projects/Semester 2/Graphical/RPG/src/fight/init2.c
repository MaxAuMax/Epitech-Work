/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init2.c
*/

#include "rpg.h"

void init_pl(t_global *glb)
{
    glb->fgt->pl = malloc(sizeof(t_sprite));
    glb->fgt->pl->txtr =
    sfTexture_createFromFile("assets/fight/players.png", NULL);
    glb->fgt->pl->pos = (sfVector2f){1223, 780};
    glb->fgt->pl->rect = (sfIntRect){0, 0, 432, 144};
    glb->fgt->pl->sp = sfSprite_create();
    sfSprite_setTexture(glb->fgt->pl->sp, glb->fgt->pl->txtr, sfTrue);
    sfSprite_setTextureRect(glb->fgt->pl->sp, glb->fgt->pl->rect);
    sfSprite_setPosition(glb->fgt->pl->sp, glb->fgt->pl->pos);
}
