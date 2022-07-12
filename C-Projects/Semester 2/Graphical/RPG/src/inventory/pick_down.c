/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** pick_down.c
*/

#include "rpg.h"

int unpick(t_global *glb, int x, int y, sfVector2i mp)
{
    if (glb->unequip && mp.x > glb->player->inv->pos.x + x * 144 &&
    mp.x < glb->player->inv->pos.x + (x + 1) * 144 &&
    mp.y > glb->player->inv->pos.y + (y +1) * 144 &&
    mp.y < glb->player->inv->pos.y + (y + 2) * 144 &&
    glb->inv_arr[y - 1][x - 1] == 'v') {
        glb->grab = false;
        glb->unequip = false;
        sfSprite_setPosition(glb->player->i_sel->sp,
        (sfVector2f) {3000, 3000});
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->i_sel->sp, NULL);
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->inv->sp, NULL);
        glb->inv_arr[y - 1][x - 1] = glb->inv_bar[glb->g_stkx];
        glb->inv_bar[glb->g_stkx] = 'v';
        return 1;
    }
    return 0;
}

int down(t_global *glb, int x, int y, sfVector2i mp)
{
    if ( mp.x > glb->player->inv->pos.x + x * 144 &&
    mp.x < glb->player->inv->pos.x + (x + 1) * 144 &&
    mp.y > glb->player->inv->pos.y + (y +1) * 144 &&
    mp.y < glb->player->inv->pos.y + (y + 2) * 144) {
        glb->grab = false;
        sfSprite_setPosition(glb->player->i_sel->sp,
        (sfVector2f) {3000, 3000});
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->i_sel->sp, NULL);
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->inv->sp, NULL);
        char c = glb->inv_arr[glb->g_stky][glb->g_stkx];
        glb->inv_arr[glb->g_stky][glb->g_stkx] = glb->inv_arr[y - 1][x - 1];
        glb->inv_arr[y - 1][x - 1] = c;
        return 1;
    }
    return 0;
}

void put_down(t_global *glb, sfVector2i mp)
{
    int y = 1, x = 1;
    for (int i = 0; i < 12; i++) {
        if (x == 5) y++, x = 1;
        equip(glb, 'w', 1, mp), equip(glb, 'a', 2, mp), equip(glb, 's', 3, mp);
        equip(glb, 'h', 4, mp);
        if (unpick(glb, x, y, mp) == 1);
        else if (down(glb, x, y, mp) == 1);
        x++;
    }
}
