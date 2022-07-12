/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** bkgsettings.c
*/

#include "rpg.h"

void init_bkgset(t_global *glb)
{
    glb->bkgset = malloc(sizeof(t_sprite));
    glb->bkgset->rect.top = 0;
    glb->bkgset->rect.left = 0;
    glb->bkgset->rect.width = 903;
    glb->bkgset->rect.height = 543;

    glb->bkgset->txtr =
    sfTexture_createFromFile("assets/menu/bkgsettings.png", NULL);
    glb->bkgset->sp = sfSprite_create();
    glb->bkgset->scale = (sfVector2f) {2.15, 2};
    sfSprite_setTexture(glb->bkgset->sp, glb->bkgset->txtr, sfFalse);
    sfSprite_setTextureRect(glb->bkgset->sp, glb->bkgset->rect);
    sfSprite_setScale(glb->bkgset->sp, glb->bkgset->scale);
}
