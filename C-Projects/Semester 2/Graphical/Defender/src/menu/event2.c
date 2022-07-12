/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** event2.c
*/

#include "my.h"

void events_setting4(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->returnb.pos.x &&
    mouse.x <= global->returnb.pos.x + 63
    && mouse.y >= global->returnb.pos.y &&
    mouse.y <= global->returnb.pos.y + 68.25)
        click_returnb(global, 1);
    else
        click_returnb(global, 0);
}

void events_about(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }

        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            global->status = 0;
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->returnb.pos.x &&
        mouse.x <= global->returnb.pos.x + 63
        && mouse.y >= global->returnb.pos.y &&
        mouse.y <= global->returnb.pos.y + 68.25)
            click_returnb(global, 1);
        else
            click_returnb(global, 0);
    }
}

void events_pause(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->resumeb.pos.x &&
        mouse.x <= global->resumeb.pos.x + 285 &&
        mouse.y >= global->resumeb.pos.y &&
        mouse.y <= global->resumeb.pos.y + 73.5)
            click_resumeb(global, 1);
        else
            click_resumeb(global, 0);
        events_pause2(global, mouse);
    }
}

void events_pause2(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->quitb2.pos.x &&
    mouse.x <= global->quitb2.pos.x + 285 &&
    mouse.y >= global->quitb2.pos.y &&
    mouse.y <= global->quitb2.pos.y + 73.5)
        click_quitb2(global, 1);
    else
        click_quitb2(global, 0);
    if (mouse.x >= global->homeb.pos.x &&
    mouse.x <= global->homeb.pos.x + 285 &&
    mouse.y >= global->homeb.pos.y &&
    mouse.y <= global->homeb.pos.y + 73.5)
        click_homeb(global, 1);
    else
        click_homeb(global, 0);
}
