/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** button2.c
*/

#include "rpg.h"

void perso_custom (t_global *glb)
{
    if (glb->selct > 2)
        glb->selct = 0;
    if (glb->selct < 0)
        glb->selct = 2;
    if (glb->selct == 0) {
        switch_perso(glb);
    }
    if (glb->selct == 1) {
        switch_perso2(glb);
    }
    if (glb->selct == 2) {
        switch_perso3(glb);
    }
    glb->click = 0;
}

void button_next(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->next->pos.x &&
    pos_mouse.x <= glb->next->pos.x + 28*2 &&
    pos_mouse.y >= glb->next->pos.y && pos_mouse.y <= glb->next->pos.y + 40) {
        sfSprite_setTextureRect(glb->next->sp, glb->next->rect);
            glb->next->rect.left = 14;
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            glb->click++;
        } else if (glb->click > 0 &&
        glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->selct++;
            perso_custom(glb);
        }
    } else {
        glb->next->rect.left = 0;
        sfSprite_setTextureRect(glb->next->sp, glb->next->rect);
    }
}

void button_previous(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->previous->pos.x &&
    pos_mouse.x <= glb->previous->pos.x + 28*2 &&
    pos_mouse.y >= glb->previous->pos.y &&
    pos_mouse.y <= glb->previous->pos.y + 40) {
        sfSprite_setTextureRect(glb->previous->sp, glb->previous->rect);
            glb->previous->rect.left = 14;
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            glb->click++;
        } else if (glb->click > 0 &&
        glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->selct--;
            perso_custom(glb);
        }
    } else {
        glb->previous->rect.left = 0;
        sfSprite_setTextureRect(glb->previous->sp, glb->previous->rect);
    }
}
