/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_stat.c
*/

#include "rpg.h"

t_char_stat *filing_base_stats(sfIntRect rct)
{
    t_char_stat *charact = malloc(sizeof(t_char_stat));
    charact->atk = rct.left;
    charact->hp = rct.top;
    charact->hp_max = rct.top;
    charact->dodge = rct.width;
    charact->def = rct.height;
    return charact;
}

void init_player_stats(t_global *glb)
{
    glb->player->war_s = filing_base_stats((sfIntRect){16, 50, 2, 10});
    glb->player->mage_s = filing_base_stats((sfIntRect){22, 30, 1, 0});
    glb->player->lumb_s = filing_base_stats((sfIntRect){10, 70, 0, 30});
    glb->player->atk = glb->player->war_s->atk;
    glb->player->hp = glb->player->war_s->hp;
    glb->player->hp_max = glb->player->war_s->hp_max;
    glb->player->dodge = glb->player->war_s->dodge;
    glb->player->def = glb->player->war_s->def;
}
