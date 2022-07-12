/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** menu.c
*/

#include "rpg.h"

void event_menu(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(glb->window->w);
}

void menu(t_global *glb)
{
    sfRenderWindow_display(glb->window->w);
    event_menu(glb);
    sfVector2i pos_mouse =
        sfMouse_getPositionRenderWindow(glb->window->w);
    button_settings(pos_mouse, glb);
    button_htp(pos_mouse, glb);
    button_quit(pos_mouse, glb);
    button_play(pos_mouse, glb);
    button_next(pos_mouse, glb);
    button_previous(pos_mouse, glb);
    sfRenderWindow_clear(glb->window->w, sfBlack);
    sfRenderWindow_drawSprite(glb->window->w, glb->bkg->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->play->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->quit->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->setings->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->htp->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->next->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->previous->sp, NULL);
    perso(glb);
}
