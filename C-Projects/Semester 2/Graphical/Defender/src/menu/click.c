/*
** EPITECH PROJECT, 2021
** Graphical_B2
** File description:
** click.c
*/

#include "my.h"

void click_playb(t_global *global, int nb)
{
    if (nb == 1) {
        global->playb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 1;
    } else {
        global->playb.rect.left = 0;
    }
}

void click_settingb(t_global *global, int nb)
{
    if (nb == 1) {
        global->settingb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->status = 3;
    } else {
        global->settingb.rect.left = 0;
    }
}

void click_quitb(t_global *global, int nb)
{
    if (nb == 1) {
        global->quitb.rect.left = 190;
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }
    } else {
        global->quitb.rect.left = 0;
    }
}

void click_music_on(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->music_onb.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->music_onb.rect.left = 0;
            if (global->music_onb.rect.top == 0) {
                global->music_onb.rect.top = 455;
                sfMusic_pause(global->music);
            } else {
                global->music_onb.rect.top = 0;
                sfMusic_play(global->music);
            }
        }
    } else {
        global->music_onb.rect.left = 0;
    }
}

void click_sound_on(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->sound_onb.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->sound_onb.rect.left = 0;
            if (global->sound_onb.rect.top == 0)
                global->sound_onb.rect.top = 455;
            else
                global->sound_onb.rect.top = 0;
        }
    } else {
        global->sound_onb.rect.left = 0;
    }
}

void click_fps30(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->fps30.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->fps30.rect.left = 0;
            global->fps30.rect.top = 0;
            sfRenderWindow_setFramerateLimit(global->window.window, 30);
            global->fps60.rect.top = 453;
            global->fps120.rect.top = 453;

        }
    } else {
        global->fps30.rect.left = 0;
    }
}

void click_fps60(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->fps60.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->fps60.rect.left = 0;
            global->fps60.rect.top = 0;
            sfRenderWindow_setFramerateLimit(global->window.window, 60);
            global->fps30.rect.top = 453;
            global->fps120.rect.top = 453;

        }
    } else {
        global->fps60.rect.left = 0;
    }
}

void click_fps120(t_global *global, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            global->fps120.rect.left = 420;
        else if (global->window.event.type == sfEvtMouseButtonReleased) {
            global->fps120.rect.left = 0;
            global->fps120.rect.top = 0;
            sfRenderWindow_setFramerateLimit(global->window.window, 120);
            global->fps30.rect.top = 453;
            global->fps60.rect.top = 453;

        }
    } else {
        global->fps120.rect.left = 0;
    }
}
