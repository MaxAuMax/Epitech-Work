/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** drawsetting.c
*/

#include "rpg.h"

void draw_settings(t_global *glb)
{
    sfRenderWindow_drawSprite(glb->window->w, glb->bkgset->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->music_onb->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->sound_onb->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fps30->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fps60->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fps120->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->returnb->sp, NULL);
}

void draw_pause(t_global *glb)
{
    sfRenderWindow_drawSprite(glb->window->w, glb->homeb->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->resumeb->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->quitpause->sp, NULL);
}
