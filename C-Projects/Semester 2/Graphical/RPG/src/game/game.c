/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** game.c
*/

#include "rpg.h"

void anim_pnj(t_global *glb)
{
    sfTime pl_time = sfClock_getElapsedTime(glb->pnj_clk);
    float pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->marcel->sp->rect, 32, 32 * 3);
        sfSprite_setTextureRect(glb->marcel->sp->sp, glb->marcel->sp->rect);
        move_rect(&glb->conor->sp->rect, 32, 32 * 3);
        sfSprite_setTextureRect(glb->conor->sp->sp, glb->conor->sp->rect);
        move_rect(&glb->gege->sp->rect, 32, 32 * 3);
        sfSprite_setTextureRect(glb->gege->sp->sp, glb->gege->sp->rect);
        sfClock_restart(glb->pnj_clk);
    }
}

void game(t_global *glb)
{
    sfSprite_setScale(glb->player->armor->sp, (sfVector2f){1, 1});
    if (glb->inside) event_inside(glb);
    else event_game(glb);
    if (glb->player->war_s->hp <= 0 &&
    glb->player->lumb_s->hp <= 0 && glb->player->mage_s->hp <= 0)
        glb->scene = 8;
    sfRenderWindow_clear(glb->window->w, glb->window->color);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    anim_pnj(glb), draw_pnj(glb), draw_enemi(glb);
    sfRenderWindow_drawSprite(glb->window->w, glb->chest->sp, NULL);
    if (glb->int_map == 1 && !glb->arm1)
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->armor->sp, NULL);
    sfRenderWindow_display(glb->window->w);
}
