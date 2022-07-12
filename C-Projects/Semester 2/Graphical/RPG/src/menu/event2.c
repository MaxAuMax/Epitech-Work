/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** events2.c
*/

#include "rpg.h"

void events_pause(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w,
        &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed) {
            sfRenderWindow_close(glb->window->w);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            glb->scene = 1,
            sfRenderWindow_setMouseCursorVisible(glb->window->w, sfFalse);
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(glb->window->w);
        if (mouse.x >= glb->homeb->pos.x &&
        mouse.x <= glb->homeb->pos.x + 285 &&
        mouse.y >= glb->homeb->pos.y &&
        mouse.y <= glb->homeb->pos.y + 73.5)
            click_homeb(glb, 1);
        else
            click_homeb(glb, 0);
        events_pause2(glb, mouse);
    }
}

void events_pause2(t_global *glb, sfVector2i mouse)
{
    if (mouse.x >= glb->resumeb->pos.x &&
    mouse.x <= glb->resumeb->pos.x + 285 &&
    mouse.y >= glb->resumeb->pos.y &&
    mouse.y <= glb->resumeb->pos.y + 73.5)
        click_resumeb(glb, 1);
    else
        click_resumeb(glb, 0);
    if (mouse.x >= glb->quitpause->pos.x &&
    mouse.x <= glb->quitpause->pos.x + 285 &&
    mouse.y >= glb->quitpause->pos.y &&
    mouse.y <= glb->quitpause->pos.y + 73.5)
        click_quitb2(glb, 1);
    else
        click_quitb2(glb, 0);
}
