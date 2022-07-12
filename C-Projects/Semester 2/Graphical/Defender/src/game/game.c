/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** game.c
*/

#include "my.h"

void texture_game(t_global *global)
{
    for (int i = 0; global->all_tiles[i] != NULL; i++)
        sfSprite_setTextureRect(global->all_tiles[i]->sp,
            global->all_tiles[i]->rect);
    for (int i = 0; global->all_enemies[i] != NULL; i++)
        sfSprite_setTextureRect(global->all_enemies[i]->sp,
            global->all_enemies[i]->rect);
    for (int i = 0; i < global->plc; i++)
        sfSprite_setTextureRect(global->all_turret[i]->sp,
        global->all_turret[i]->rect);
    sfSprite_setTextureRect(global->spawnb.sp, global->spawnb.rect);
    sfSprite_setTextureRect(global->shopb.sp, global->shopb.rect);
    sfSprite_setTextureRect(global->gshop.sp, global->gshop.rect);
    sfSprite_setTextureRect(global->goldc.sp, global->goldc.rect);
    sfSprite_setTextureRect(global->cross.sp, global->cross.rect);
}

void draw_enemies(t_global *global, int i)
{
    if (global->spawn == true) {
        sfRenderWindow_drawSprite(global->window.window,
            global->all_enemies[i]->sp, NULL);
        if (global->enemy_clock.seconds > 0.01) {
            path_finding(global->all_enemies[i], global->map);
            sfClock_restart(global->enemy_clock.clock);
        }
    }
}

void draw_game(t_global *global)
{
    for (int i = 0; global->all_tiles[i] != NULL; i++)
        sfRenderWindow_drawSprite(global->window.window,
            global->all_tiles[i]->sp, NULL);
    for (int i = 0; global->all_enemies[i] != NULL; i++)
        draw_enemies(global, i);
    for (int i = 0; i < global->plc; i++)
        sfRenderWindow_drawSprite(global->window.window,
        global->all_turret[i]->sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->shopb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->gshop.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->spawnb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->goldc.sp, NULL);
    sfRenderWindow_drawText(global->window.window, global->gold.text, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->cross.sp, NULL);
}

void game(t_global *global)
{
    global->enemy_clock.time =
            sfClock_getElapsedTime(global->enemy_clock.clock);
    global->enemy_clock.seconds =
        global->enemy_clock.time.microseconds / 1000000.0;

    sfRenderWindow_display(global->window.window);
    events_game(global);
    texture_game(global);
    sfRenderWindow_clear(global->window.window, global->window.color);

    global->mouse = sfMouse_getPositionRenderWindow(global->window.window);
    global->cross.pos = (sfVector2f){global->mouse.x, global->mouse.y};
    sfSprite_setPosition(global->cross.sp, global->cross.pos);

    draw_game(global);
}
