/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** click.c
*/

#include "rpg.h"

void click_music_on(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->music_onb->rect.left = 48;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->music_onb->rect.left = 0;
            if (glb->music_onb->rect.top == 0) {
                glb->music_onb->rect.top = 48;
                sfMusic_pause(glb->music->musictuto);
            } else {
                glb->music_onb->rect.top = 0;
                sfMusic_play(glb->music->musictuto);
            }
        }
    } else {
        glb->music_onb->rect.left = 0;
    }
}

void click_sound_on(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->sound_onb->rect.left = 48;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->sound_onb->rect.left = 0;
            if (glb->sound_onb->rect.top == 0)
                glb->sound_onb->rect.top = 48;
            else
                glb->sound_onb->rect.top = 0;
        }
    } else {
        glb->sound_onb->rect.left = 0;
    }
}

void click_fps30(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->fps30->rect.left = 48;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->fps30->rect.left = 0;
            glb->fps30->rect.top = 0;
            sfRenderWindow_setFramerateLimit(glb->window->w, 30);
            glb->fps60->rect.top = 48;
            glb->fps120->rect.top = 48;

        }
    } else {
        glb->fps30->rect.left = 0;
    }
}

void click_fps60(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->fps60->rect.left = 48;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->fps60->rect.left = 0;
            glb->fps60->rect.top = 0;
            sfRenderWindow_setFramerateLimit(glb->window->w, 60);
            glb->fps30->rect.top = 48;
            glb->fps120->rect.top = 48;

        }
    } else {
        glb->fps60->rect.left = 0;
    }
}

void click_fps120(t_global *glb, int nb)
{
    if (nb == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            glb->fps120->rect.left = 48;
        else if (glb->window->evt.type == sfEvtMouseButtonReleased) {
            glb->fps120->rect.left = 0;
            glb->fps120->rect.top = 0;
            sfRenderWindow_setFramerateLimit(glb->window->w, 120);
            glb->fps30->rect.top = 48;
            glb->fps60->rect.top = 48;

        }
    } else {
        glb->fps120->rect.left = 0;
    }
}
