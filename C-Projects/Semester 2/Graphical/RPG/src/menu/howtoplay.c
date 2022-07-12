/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** howtoplay.c
*/

#include "rpg.h"

void init_bkghtp(t_global *glb)
{
    glb->bkghtp = malloc(sizeof(t_sprite));
    glb->bkghtp->rect.top = 0;
    glb->bkghtp->rect.left = 0;
    glb->bkghtp->rect.width = 903;
    glb->bkghtp->rect.height = 543;

    glb->bkghtp->txtr =
    sfTexture_createFromFile("assets/menu/bkghtp.png", NULL);
    glb->bkghtp->sp = sfSprite_create();
    glb->bkghtp->scale = (sfVector2f) {2.15, 2};
    sfSprite_setTexture(glb->bkghtp->sp, glb->bkghtp->txtr, sfFalse);
    sfSprite_setTextureRect(glb->bkghtp->sp, glb->bkghtp->rect);
    sfSprite_setScale(glb->bkghtp->sp, glb->bkghtp->scale);
}

void htp(t_global *glb)
{
    sfRenderWindow_display(glb->window->w);
    events_setting(glb);
    texture_settings(glb);
    sfRenderWindow_clear(glb->window->w, sfBlack);
    sfRenderWindow_drawSprite(glb->window->w, glb->bkghtp->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->returnb->sp, NULL);
}
