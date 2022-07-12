/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** event_attack.c
*/

#include "rpg.h"

void third_attack_p0(t_global *glb)
{
    glb->fgt->atk += 2;
}

void third_attack_p1(t_global *glb)
{
}

void third_attack_p2(t_global *glb)
{
    glb->fgt->def += 7;
    if (glb->fgt->def > 30)
        glb->fgt->def = 30;
}

void third_attack(t_global *glb)
{
    if (glb->atk_turn == true && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (glb->selct == 0)
            third_attack_p0(glb);
        if (glb->selct == 1)
            third_attack_p1(glb);
        if (glb->selct == 2)
            third_attack_p2(glb);
        glb->atk_turn = false;
        sfClock_restart(glb->fgt->en_clk->clock);
    }
}
