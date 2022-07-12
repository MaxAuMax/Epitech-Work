/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** buton3.c
*/

#include "rpg.h"

void switch_perso(t_global *glb)
{
    glb->player->player->txtr = glb->player->w;
    glb->player->player->rect = (sfIntRect){0, 0, 30, 42};
    sfSprite_setTexture(glb->player->player->sp,
    glb->player->player->txtr, sfFalse);
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    glb->player->atk = glb->player->war_s->atk;
    glb->player->hp = glb->player->war_s->hp;
    glb->player->dodge = glb->player->war_s->dodge;
    glb->player->def = glb->player->war_s->def;
}

void switch_perso2(t_global *glb)
{
    glb->player->player->txtr = glb->player->m;
    glb->player->player->rect = (sfIntRect){0, 0, 26, 32};
    sfSprite_setTexture(glb->player->player->sp,
    glb->player->m, sfFalse);
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    glb->player->atk = glb->player->mage_s->atk;
    glb->player->hp = glb->player->mage_s->hp;
    glb->player->dodge = glb->player->mage_s->dodge;
    glb->player->def = glb->player->mage_s->def;
}

void switch_perso3(t_global *glb)
{
    glb->player->player->txtr = glb->player->l;
    glb->player->player->rect = (sfIntRect){0, 0, 30, 34};
    sfSprite_setTexture(glb->player->player->sp,
    glb->player->player->txtr, sfFalse);
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    glb->player->atk = glb->player->lumb_s->atk;
    glb->player->hp = glb->player->lumb_s->hp;
    glb->player->dodge = glb->player->lumb_s->dodge;
    glb->player->def = glb->player->lumb_s->def;
}
