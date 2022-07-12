/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** my_defender.c
*/

#include "my.h"
void all_menu(t_global *global)
{
    create_menu(global);
    set_menu(global);
    create_setting(global);
    set_setting(global);
    create_about(global);
    set_about(global);
}

void all_game(t_global *global)
{
    create_tiles(global, global->map);
    create_enemies(global);
    create_set_cursor(&global->cross);
    create_gshop(global);
    set_gshop(global);
    spawnb(&global->spawnb);
    set_sprite(global->spawnb);
    create_pause(global);
    set_pause(global);
    create_turret(global);
    create_gold(&global->gold);
    gold_icon(&global->goldc);
    set_sprite(global->goldc);
}

void launch(t_global *global)
{
    all_menu(global);
    all_game(global);
    global->music = sfMusic_createFromFile("pics/music.ogg");
    sfMusic_play(global->music);
    sfMusic_setVolume(global->music, 50);
    sfMusic_setLoop(global->music, sfTrue);
    global->spawn = false;
    global->enemy_clock.clock = sfClock_create();
}

void my_defender(t_global *global)
{
    launch(global);
    sfRenderWindow_setFramerateLimit(global->window.window, 60);
    while (sfRenderWindow_isOpen(global->window.window)) {
        sfRenderWindow_setMouseCursorVisible(global->window.window, sfTrue);
        if (global->status == 0)
            menu(global);
        if (global->status == 1) {
            sfRenderWindow_setMouseCursorVisible(global->window.window,
            sfFalse);
            game(global);
        }
        if (global->status == 3)
            menu_settings(global);
        if (global->status == 4)
            menu_about(global);
        if (global->status == 5)
            menu_pause(global);
    }
}
