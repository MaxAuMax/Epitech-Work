/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** update_stats.c
*/

#include "rpg.h"

int update_stats(t_global *glb, t_sprite *sprt, int s_m)
{
    if (sprt->rect.top == 0)
        return s_m + 10;
    else if (sprt->rect.top == 48)
        return s_m + 20;
    else if (sprt->rect.top == 96)
        return s_m + 30;
}

int set_stats_atk(t_global *glb, t_sprite *sprt)
{
    if (glb->selct == 0) {
        return update_stats(glb, sprt, glb->player->war_s->atk);
    } else if (glb->selct == 1) {
        return update_stats(glb, sprt, glb->player->mage_s->atk);
    } else if (glb->selct == 2) {
        return update_stats(glb, sprt, glb->player->lumb_s->atk);
    }
}

int set_stats_hp(t_global *glb, t_sprite *sprt)
{
    if (glb->selct == 0) {
        return update_stats(glb, sprt, glb->player->war_s->hp);
    } else if (glb->selct == 1) {
        return update_stats(glb, sprt, glb->player->mage_s->hp);
    } else if (glb->selct == 2) {
        return update_stats(glb, sprt, glb->player->lumb_s->hp);
    }
}

int set_stats_dodge(t_global *glb, t_sprite *sprt)
{
    if (glb->selct == 0) {
        return update_stats(glb, sprt, glb->player->war_s->dodge);
    } else if (glb->selct == 1) {
        return update_stats(glb, sprt, glb->player->mage_s->dodge);
    } else if (glb->selct == 2) {
        return update_stats(glb, sprt, glb->player->lumb_s->dodge);
    }
}

int set_stats_def(t_global *glb, t_sprite *sprt)
{
    if (glb->selct == 0) {
        return update_stats(glb, sprt, glb->player->war_s->def);
    } else if (glb->selct == 1) {
        return update_stats(glb, sprt, glb->player->mage_s->def);
    } else if (glb->selct == 2) {
        return update_stats(glb, sprt, glb->player->lumb_s->def);
    }
}
