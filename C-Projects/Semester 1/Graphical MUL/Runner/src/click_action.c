/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** click_action.c
*/

#include "my.h"

void click_play(t_global *global, int nb)
{
    if (nb == 1) {
        global->play.rect.left = 609;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 1;
    } else {
        global->play.rect.left = 0;
    }
}

void click_settings(t_global *global, int nb)
{
    if (nb == 1) {
        global->settings.rect.left = 609;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            global->status = 2;
        }
    } else {
        global->settings.rect.left = 0;
    }
}

void click_quit(t_global *global, int nb)
{
    if (nb == 1) {
        global->quit.rect.left = 609;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            sfRenderWindow_close(global->window.window);

    } else {
        global->quit.rect.left = 0;
    }
}

void click_select(t_global *global, int nb)
{
    if (nb == 1) {
        global->back.rect.left = 609;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 0;
    } else
        global->back.rect.left = 0;
}