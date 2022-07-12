/*
** EPITECH PROJECT, 2021
** Graphical_B2
** File description:
** event.c
*/

#include "my.h"

void events_menu(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
            sfRenderWindow_close(global->window.window);
            sfMusic_stop(global->music);
        }
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->playb.pos.x && mouse.x <= global->playb.pos.x +
        285 && mouse.y >= global->playb.pos.y &&
        mouse.y <= global->playb.pos.y + 73.5)
            click_playb(global, 1);
        else
            click_playb(global, 0);
        events_menu2(global, mouse);
    }
}

void events_menu2(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->settingb.pos.x &&
    mouse.x <= global->settingb.pos.x + 228 &&
    mouse.y >= global->settingb.pos.y &&
    mouse.y <= global->settingb.pos.y + 58.8)
        click_settingb(global, 1);
    else
        click_settingb(global, 0);
    if (mouse.x >= global->quitb.pos.x && mouse.x <= global->quitb.pos.x +
    228 && mouse.y >= global->quitb.pos.y &&
    mouse.y <= global->quitb.pos.y + 53.9)
        click_quitb(global, 1);
    else
        click_quitb(global, 0);
    events_menu3(global, mouse);
}

void events_menu3(t_global *global, sfVector2i mouse)
{
        if (mouse.x >= global->settingb.pos.x &&
    mouse.x <= global->aboutb.pos.x + 228 &&
    mouse.y >= global->aboutb.pos.y &&
    mouse.y <= global->aboutb.pos.y + 59.3)
        click_aboutb(global, 1);
    else
        click_aboutb(global, 0);
}

void events_setting(t_global *global)
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
        if (mouse.x >= global->music_onb.pos.x &&
        mouse.x <= global->music_onb.pos.x + 105 &&
        mouse.y >= global->music_onb.pos.y &&
        mouse.y <= global->music_onb.pos.y + 113.75)
            click_music_on(global, 1);
        else
            click_music_on(global, 0);
        events_setting2(global, mouse);
    }
}

void events_setting2(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->sound_onb.pos.x &&
    mouse.x <= global->sound_onb.pos.x + 105
    && mouse.y >= global->sound_onb.pos.y &&
    mouse.y <= global->sound_onb.pos.y + 113.75)
        click_sound_on(global, 1);
    else
        click_sound_on(global, 0);
    if (mouse.x >= global->fps30.pos.x &&
    mouse.x <= global->fps30.pos.x + 42
    && mouse.y >= global->fps30.pos.y &&
    mouse.y <= global->fps30.pos.y + 45.3)
        click_fps30(global, 1);
    else
        click_fps30(global, 0);
    events_setting3(global, mouse);
}

void events_setting3(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->fps60.pos.x &&
    mouse.x <= global->fps60.pos.x + 42
    && mouse.y >= global->fps60.pos.y &&
    mouse.y <= global->fps60.pos.y + 45.3)
        click_fps60(global, 1);
    else
        click_fps60(global, 0);
    if (mouse.x >= global->fps120.pos.x &&
    mouse.x <= global->fps120.pos.x + 42
    && mouse.y >= global->fps120.pos.y &&
    mouse.y <= global->fps120.pos.y + 45.3)
        click_fps120(global, 1);
    else
        click_fps120(global, 0);
    events_setting4(global, mouse);
}
