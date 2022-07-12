/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** events.c
*/

#include "my.h"

void click_shopb(t_global *global)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == true) {
        global->shopb.rect.left = 420;
        if (global->gshop.pos.x == 0)
            global->gshop.pos.x = 500;
        else
            global->gshop.pos.x = 0;
    } else
        global->shopb.rect.left = 0;
    sfSprite_setPosition(global->gshop.sp, global->gshop.pos);
}

void click_spawnb(t_global *global)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == true) {
        global->spawnb.rect.left = 420;
        global->spawn = true;
    } else
        global->spawnb.rect.left = 0;
}

void events_game2(t_global *global, sfVector2i mouse)
{
    if (mouse.x >= global->spawnb.pos.x &&
    mouse.x <= global->spawnb.pos.x + 92.4 &&
    mouse.y >= global->spawnb.pos.y &&
    mouse.y <= global->spawnb.pos.y + 100.1)
        click_spawnb(global);
    if (global->gshop.pos.x == 0)
        check_turret(global, mouse);
}

void events_game(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);

        if (sfKeyboard_isKeyPressed(sfKeyEscape) == true)
            global->status = 5;
    sfVector2i mouse =
        sfMouse_getPositionRenderWindow(global->window.window);
    if (mouse.x >= global->shopb.pos.x &&
    mouse.x <= global->shopb.pos.x + 63 &&
    mouse.y >= global->shopb.pos.y &&
    mouse.y <= global->shopb.pos.y + 68.25)
        click_shopb(global);
    events_game2(global, mouse);
    }
}
