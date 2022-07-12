/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** ennemy_attack.c
*/

#include "rpg.h"

void change_player_hp(t_global *glb)
{
    if (glb->selct == 0)
        glb->player->war_s->hp -= glb->fgt->en_atk;
    if (glb->selct == 1)
        glb->player->mage_s->hp -= glb->fgt->en_atk;
    if (glb->selct == 2)
        glb->player->lumb_s->hp -= glb->fgt->en_atk;
}

void enemy_attack(t_global *glb)
{
    if (glb->atk_turn == false) {
        glb->fgt->ui_att->rect.left = 0;
        glb->fgt->en_clk->time =
            sfClock_getElapsedTime(glb->fgt->en_clk->clock);
        glb->fgt->en_clk->sec =
            glb->fgt->en_clk->time.microseconds / 1000000.0;
        if (glb->fgt->en_clk->sec > 1) {
            glb->atk_turn = true;
            glb->player->hp -= glb->fgt->en_atk;
            change_player_hp(glb);
            sfClock_restart(glb->fgt->en_clk->clock);
        }
    }
}
