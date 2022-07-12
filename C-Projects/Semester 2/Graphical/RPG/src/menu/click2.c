/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** click2.c
*/

#include "rpg.h"

void click_returnb(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->returnb->rect.left = 14;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->returnb->rect.left = 0;
            glb->scene = 0;
        }
    } else {
        glb->returnb->rect.left = 0;
    }
}

void click_homeb(t_global *glb, int nb)
{
    if (nb == 1) {
        glb->homeb->rect.left = 144;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            glb->scene = 0;
            sfSprite_setScale(glb->player->player->sp, (sfVector2f){4, 4});
            sfSprite_setPosition(glb->player->player->sp,
            (sfVector2f){1920/2 - glb->player->player->rect.width * 2,
            1080/2 - glb->player->player->rect.height * 2});
            if (glb->player->player->rect.top != 0)
                glb->player->player->rect.top = 0;

        }
    } else {
        glb->homeb->rect.left = 0;
    }
}

void click_resumeb(t_global *glb, int nb)
{
    if (nb == 1) {
        glb->resumeb->rect.left = 144;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->scene = 1,
            sfRenderWindow_setMouseCursorVisible(glb->window->w, sfFalse);
    } else {
        glb->resumeb->rect.left = 0;
    }
}

void click_quitb2(t_global *glb, int nb)
{
    if (nb == 1) {
        glb->quitpause->rect.left = 144;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            sfRenderWindow_close(glb->window->w);
        }
    } else {
        glb->quitpause->rect.left = 0;
    }
}
