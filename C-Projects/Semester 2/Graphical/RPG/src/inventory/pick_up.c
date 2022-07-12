/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** pick_up.c
*/

#include "rpg.h"

int pick(t_global *glb, int x, int y, sfVector2i mp)
{
    if (mp.x > glb->player->inv->pos.x + x * 144 &&
    mp.x < glb->player->inv->pos.x + (x + 1) * 144 &&
    mp.y > glb->player->inv->pos.y + (y +1) * 144 &&
    mp.y < glb->player->inv->pos.y + (y + 2) * 144) {
        glb->grab = true;
        glb->g_stkx = x - 1, glb->g_stky = y - 1;
        draw_inv(glb);
    }
}

void pick_up(t_global *glb, sfVector2i mp)
{
    int y = 1, x = 1;
    for (int i = 0; i < 12; i++) {
        if (x == 5) y++, x = 1; if (pick(glb, y, x, mp) == 1);
        else if (mp.x > glb->player->inv->pos.x + x * 144 &&
        mp.x < glb->player->inv->pos.x + (x + 1) * 144 &&
        mp.y > glb->player->inv->pos.y + 144 &&
        mp.y < glb->player->inv->pos.y + 288) {
            glb->unequip = true;
            glb->grab = true;
            glb->g_stkx = x - 1, glb->g_stky = 0;
            glb->player->i_sel->pos.x = glb->player->inv->pos.x + x * 144;
            glb->player->i_sel->pos.y = glb->player->inv->pos.y + 144;
            sfSprite_setPosition(glb->player->i_sel->sp,
            glb->player->i_sel->pos);
            break;
        }
        x++;
    }
}
