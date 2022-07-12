/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** click2.c
*/

#include "my.h"

void click_returnb(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->returnb.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->returnb.rect.left = 0;
            global->status = 0;
        }
    } else {
        global->returnb.rect.left = 0;
    }
}

void click_aboutb(t_global *global, int nb)
{
    if (nb == 1) {
        global->aboutb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 4;
    } else {
        global->aboutb.rect.left = 0;
    }
}

void click_homeb(t_global *global, int nb)
{
    if (nb == 1) {
        global->homeb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 0;
    } else {
        global->homeb.rect.left = 0;
    }
}

void click_resumeb(t_global *global, int nb)
{
    if (nb == 1) {
        global->resumeb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 1;
    } else {
        global->resumeb.rect.left = 0;
    }
}

void click_quitb2(t_global *global, int nb)
{
    if (nb == 1) {
        global->quitb2.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }
    } else {
        global->quitb2.rect.left = 0;
    }
}