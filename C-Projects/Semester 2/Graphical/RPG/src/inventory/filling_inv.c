/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** filling_inv.c
*/

#include "rpg.h"

void fiiling_inv(t_global *glb)
{
    int y = 1;
    int x = 1;
    for (int i = 0; i < 12; i++) {
        if (x == 5)
            y++, x = 1;
        pos_t *p = malloc(sizeof(pos_t));
        p->x = glb->player->inv->pos.x + x * 144;
        p->y = glb->player->inv->pos.y + y * 144;
        glb->inv_arr_pos[i] = p;
        x++;
    }
}
