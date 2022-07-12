/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** draw_pnj.c
*/

#include "rpg.h"

void draw_pnj(t_global *glb)
{
    sfRenderWindow_drawSprite(glb->window->w, glb->marcel->sp->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->conor->sp->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->gege->sp->sp, NULL);
}

void draw_enemi(t_global *glb)
{
    if (glb->int_map == 1) {
        if (!glb->fb1)
            sfRenderWindow_drawSprite(glb->window->w,
            glb->skl->sp->sp, NULL);
        if (!glb->fb2)
            sfRenderWindow_drawSprite(glb->window->w,
            glb->org->sp->sp, NULL);
    } else if (glb->int_map == 3) {
        if (!glb->fsnman)
            sfRenderWindow_drawSprite(glb->window->w,
            glb->snowman->sp->sp, NULL);
        if (!glb->fcross)
            sfRenderWindow_drawSprite(glb->window->w,
            glb->pb->sp->sp, NULL);
        if (!glb->inside)
            anim_snow(glb);
    }
}
