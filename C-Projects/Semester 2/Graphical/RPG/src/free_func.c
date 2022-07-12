/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** free_func.c
*/

#include "rpg.h"

void free_tsprite(t_sprite *sprite)
{
    sfSprite_destroy(sprite->sp);
    sfTexture_destroy(sprite->txtr);
    free(sprite);
}

void free_ttext(t_text *text)
{
    sfText_destroy(text->text);
    sfFont_destroy(text->font);
    free(text);
}

void free_enemi(t_enemi *enemi)
{
    free_tsprite(enemi->sp);
    free(enemi->str);
    free(enemi);
}

void free_pnj(t_pnj *pnj)
{
    free_tsprite(pnj->sp);
    free(pnj->str);
    free(pnj);
}

void free_tperso(t_global *glb)
{
    free_tsprite(glb->player->weapon);
    free_tsprite(glb->player->helmet);
    free_tsprite(glb->player->shield);
    free_tsprite(glb->player->armor);
    free_tsprite(glb->player->inv);
    free_tsprite(glb->player->i_sel);
    free_tsprite(glb->player->inv_stat_w);
    free_tsprite(glb->player->shov);
    free_tsprite(glb->player->stick);
    free_tsprite(glb->player->player);
    sfClock_destroy(glb->player->clk);
    sfClock_destroy(glb->player->walk);
    free(glb->player);
}
