/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** game.c
*/

#include "my.h"

void draw_game(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->moon.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->spike.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->demon.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->tiles.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->ghost.sp, NULL);
    sfRenderWindow_drawText(global->window.window, global->score.text, NULL);
    sfRenderWindow_drawText(global->window.window, global->score_num.text, NULL);
    int pass = 0;
    for (int i = 0; i < global->len; i++) {
        if (global->enemies[i]->pos.x < 2000 && global->enemies[i]->pos.x > -250)
            sfRenderWindow_drawSprite(global->window.window, global->enemies[i]->sp, NULL);
    }
    if (global->enemies[global->len - 1]->pos.x <= -250)
        global->status = 4;
}

void texture_game(t_global *global)
{
    sfSprite_setTextureRect(global->moon.sp, global->moon.rect);
    sfSprite_setTextureRect(global->spike.sp, global->spike.rect);
    sfSprite_setTextureRect(global->demon.sp, global->demon.rect);
    sfSprite_setTextureRect(global->tiles.sp, global->tiles.rect);
    sfSprite_setTextureRect(global->ghost.sp, global->ghost.rect);
    for (int i = 0; i < global->len; i++)
        sfSprite_setTextureRect(global->enemies[i]->sp, global->enemies[i]->rect);
}

void create_game(t_global *global)
{
    global->ghost_clock.clock = sfClock_create();
    global->jump_clock.clock = sfClock_create();
    global->para_clock.clock = sfClock_create();
    global->score_clock.clock = sfClock_create();
    c_moon(&global->moon);
    c_spike(&global->spike);
    c_demon(&global->demon);
    c_tiles(&global->tiles);
    c_ghost(&global->ghost);
    c_score(&global->score);
    c_score_num(&global->score_num);
}
