/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** handle_status.c
*/

#include "my.h"

void check_win(t_global *global)
{

}

void game(t_global *global)
{
    if (sfMusic_getStatus(global->music) == 1)
        sfMusic_play(global->music);
    reset_clock_game(global);
    sfRenderWindow_display(global->window.window);
    events_game(global);
    texture_game(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_game(global);
    parallax(global);
    for (int i = 0; i < global->len; i++) {
        global->enemies[i]->pos.x -= 15;
        sfSprite_setPosition(global->enemies[i]->sp, global->enemies[i]->pos);
    }
    check_collision(global);
    clock_game(global);
    update_score(global);
    check_win(global);
}

void menu(t_global *global)
{
    sfMusic_pause(global->music);
    sfRenderWindow_display(global->window.window);
    events_menu(global);
    texture_menu(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_menu(global);
}

void settings(t_global *global)
{
    sfRenderWindow_display(global->window.window);
    events_settings(global);
    texture_settings(global);
    sfRenderWindow_clear(global->window.window, global->window.color);
    draw_settings(global);
}
