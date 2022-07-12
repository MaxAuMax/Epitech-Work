/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** custom.c
*/

#include "rpg.h"

void weapon_custom(t_global *glb)
{
    if (glb->selct == 0)
        glb->player->weapon->rect.top = 0, glb->player->weapon->rect.left = 0;
    else if (glb->selct == 1)
        glb->player->weapon->rect.top = 0, glb->player->weapon->rect.left = 48;
    else
        glb->player->weapon->rect.top = 0, glb->player->weapon->rect.left = 96;
    sfSprite_setTextureRect(glb->player->weapon->sp,
    glb->player->weapon->rect);
}

void helmet_custom(t_global *glb)
{
    if (glb->selct == 0)
        glb->player->helmet->rect.top = 0, glb->player->helmet->rect.left = 0;
    else if (glb->selct == 1)
        glb->player->helmet->rect.top = 0, glb->player->helmet->rect.left = 48;
    else
        glb->player->helmet->rect.top = 0, glb->player->helmet->rect.left = 96;
    sfSprite_setTextureRect(glb->player->helmet->sp,
    glb->player->helmet->rect);
}

void shield_custom(t_global *glb)
{
    if (glb->selct == 0)
        glb->player->shield->rect.top = 0, glb->player->shield->rect.left = 0;
    else if (glb->selct == 1)
        glb->player->shield->rect.top = 0, glb->player->shield->rect.left = 48;
    else
        glb->player->shield->rect.top = 0, glb->player->shield->rect.left = 96;
    sfSprite_setTextureRect(glb->player->shield->sp,
    glb->player->shield->rect);
}

void armor_custom(t_global *glb)
{
    if (glb->selct == 0)
        glb->player->armor->rect.top = 0, glb->player->armor->rect.left = 0;
    else if (glb->selct == 1)
        glb->player->armor->rect.top = 0, glb->player->armor->rect.left = 48;
    else
        glb->player->armor->rect.top = 0, glb->player->armor->rect.left = 96;
    sfSprite_setTextureRect(glb->player->armor->sp,
    glb->player->armor->rect);
}

void inventory_custom(t_global *glb)
{
    sfSprite_setScale(glb->player->armor->sp, (sfVector2f) {3, 3});
    weapon_custom(glb);
    helmet_custom(glb);
    shield_custom(glb);
    armor_custom(glb);
}
