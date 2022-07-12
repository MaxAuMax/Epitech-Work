/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** evt.c
*/

#include "rpg.h"

void events_setting(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed) {
            sfRenderWindow_close(glb->window->w);
            sfMusic_stop(glb->music->musictuto);
        }

        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            glb->scene = 0;
        sfVector2i mouse =
        sfMouse_getPositionRenderWindow(glb->window->w);
        if (mouse.x >= glb->music_onb->pos.x &&
        mouse.x <= glb->music_onb->pos.x + 96 &&
        mouse.y >= glb->music_onb->pos.y &&
        mouse.y <= glb->music_onb->pos.y + 96)
            click_music_on(glb, 1);
        else
            click_music_on(glb, 0);
        events_setting2(glb, mouse);
    }
}

void events_setting2(t_global *glb, sfVector2i mouse)
{
    if (mouse.x >= glb->sound_onb->pos.x &&
    mouse.x <= glb->sound_onb->pos.x + 96
    && mouse.y >= glb->sound_onb->pos.y &&
    mouse.y <= glb->sound_onb->pos.y + 96)
        click_sound_on(glb, 1);
    else
        click_sound_on(glb, 0);
    if (mouse.x >= glb->fps30->pos.x &&
    mouse.x <= glb->fps30->pos.x + 72
    && mouse.y >= glb->fps30->pos.y &&
    mouse.y <= glb->fps30->pos.y + 72)
        click_fps30(glb, 1);
    else
        click_fps30(glb, 0);
    events_setting3(glb, mouse);
}

void events_setting3(t_global *glb, sfVector2i mouse)
{
    if (mouse.x >= glb->fps60->pos.x &&
    mouse.x <= glb->fps60->pos.x + 72
    && mouse.y >= glb->fps60->pos.y &&
    mouse.y <= glb->fps60->pos.y + 72)
        click_fps60(glb, 1);
    else
        click_fps60(glb, 0);
    if (mouse.x >= glb->fps120->pos.x &&
    mouse.x <= glb->fps120->pos.x + 72
    && mouse.y >= glb->fps120->pos.y &&
    mouse.y <= glb->fps120->pos.y + 72)
        click_fps120(glb, 1);
    else
        click_fps120(glb, 0);
    events_setting4(glb, mouse);
}

void events_setting4(t_global *glb, sfVector2i mouse)
{
    if (mouse.x >= glb->returnb->pos.x &&
    mouse.x <= glb->returnb->pos.x + 70
    && mouse.y >= glb->returnb->pos.y &&
    mouse.y <= glb->returnb->pos.y + 50)
        click_returnb(glb, 1);
    else
        click_returnb(glb, 0);
}
