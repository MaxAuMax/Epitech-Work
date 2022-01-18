/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** events.c
*/

#include "my.h"

void events_game(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);

        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
            sfMusic_pause(global->music);
            global->status = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            sfMusic_play(global->jump);
            do_jump(global);
            sfMusic_stop(global->jump);
        }
    }
}

void events_menu(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);

        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(global->window.window);

        sfVector2i mouse =
            sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->play.pos.x && mouse.x <= global->play.pos.x +
            360 && mouse.y >= global->play.pos.y
            && mouse.y <= global->play.pos.y + 120)
            click_play(global, 1);
        else
            click_play(global, 0);
    events_menu2(global, mouse);
    }
}

void events_menu2(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->quit.pos.x && mouse.x <= global->quit.pos.x +
        270 && mouse.y >= global->quit.pos.y
        && mouse.y <= global->quit.pos.y + 84)
        click_quit(global, 1);
    else
        click_quit(global, 0);
    if (mouse.x >= global->settings.pos.x && mouse.x <= global->settings.pos.x +
        270 && mouse.y >= global->settings.pos.y
        && mouse.y <= global->settings.pos.y + 90)
        click_settings(global, 1);
    else
        click_settings(global, 0);
}

void events_settings(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);

        sfVector2i mouse =
            sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->back.pos.x && mouse.x <= global->back.pos.x +
            360 && mouse.y >= global->back.pos.y
            && mouse.y <= global->back.pos.y + 120)
            click_select(global, 1);
        else
            click_select(global, 0);
    }
}

void events_end(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);
        
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(global->window.window);
    }
}
