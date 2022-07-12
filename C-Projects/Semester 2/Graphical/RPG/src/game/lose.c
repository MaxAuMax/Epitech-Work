/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** lose.c
*/

#include "rpg.h"

void event_lose(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            restart(glb);
    }
}

void lose(t_global *glb)
{
    sfRenderWindow_clear(glb->window->w, sfBlack);
    event_lose(glb);
    sfTime pl_time = sfClock_getElapsedTime(glb->pnj_clk);
    float pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->lose->rect, 1920, 1920);
        sfSprite_setTextureRect(glb->win->sp, glb->win->rect);
        sfClock_restart(glb->pnj_clk);
    }
    sfRenderWindow_drawSprite(glb->window->w, glb->win->sp, NULL);
    sfRenderWindow_display(glb->window->w);
}
