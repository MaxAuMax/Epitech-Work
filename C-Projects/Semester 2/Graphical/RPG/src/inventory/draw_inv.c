/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** draw_inv.c
*/

#include "rpg.h"

void draw_obj_bar(t_global *glb, t_sprite *sprt, int i)
{
    sprt->pos.x = glb->player->inv->pos.x + 144 + i * 144;
    sprt->pos.y = glb->player->inv->pos.y + 144;
    sfSprite_setPosition(sprt->sp, sprt->pos);
    sfRenderWindow_drawSprite(glb->window->w, sprt->sp, NULL);
}

void draw_obj(t_global *glb, t_sprite *sprt, int j, int i)
{
    sprt->pos.x = glb->player->inv->pos.x + 144 + j * 144;
    sprt->pos.y = glb->player->inv->pos.y + 288 + i * 144;;
    sfSprite_setPosition(sprt->sp, sprt->pos);
    sfRenderWindow_drawSprite(glb->window->w, sprt->sp, NULL);
}

void draw_items(t_global *glb, int i, int j)
{
    switch (glb->inv_arr[i][j]) {
    case 'w':
        draw_obj(glb, glb->player->weapon, j, i); break;
    case 'h':
        draw_obj(glb, glb->player->helmet, j, i); break;
    case 's':
        draw_obj(glb, glb->player->shield, j, i); break;
    case 'a':
        draw_obj(glb, glb->player->armor, j, i); break;
    case 'p':
        draw_obj(glb, glb->player->shov, j, i); break;
    case 'b':
        draw_obj(glb, glb->player->stick, j, i); break;
    }
    if (glb->g_stkx == j && glb->g_stky == i )
        glb->player->i_sel->pos.x = glb->player->inv->pos.x + 144 + j * 144,
        glb->player->i_sel->pos.y = glb->player->inv->pos.y + 288 + i * 144,
        sfSprite_setPosition(glb->player->i_sel->sp, glb->player->i_sel->pos);
}

void draw_inv(t_global *glb)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            draw_items(glb, i, j);
        }
    }
}

void draw_inv_bar(t_global *glb)
{
    for (int i = 0; i < 4; i++) {
        switch (glb->inv_bar[i]) {
        case 'w':
            draw_obj_bar(glb, glb->player->weapon, i); break;
        case 'h':
            draw_obj_bar(glb, glb->player->helmet, i); break;
        case 's':
            draw_obj_bar(glb, glb->player->shield, i); break;
        case 'a':
            draw_obj_bar(glb, glb->player->armor, i); break;
        }
    }
}
