/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** jump.c
*/

#include "my.h"

void end_jump(t_global *global)
{
    while (global->ghost.pos.y < 750) {
        global->jump_clock.time =
            sfClock_getElapsedTime(global->jump_clock.clock);
        global->jump_clock.seconds =
            global->jump_clock.time.microseconds / 1000000.0;
        if (global->jump_clock.seconds > 0.01) {
            global->ghost.pos.y += 8;
            sfSprite_setPosition(global->ghost.sp, global->ghost.pos);
            draw_game(global);
            parallax(global);
            for (int i = 0; i < global->len; i++) {
                global->enemies[i]->pos.x -= 15;
                sfSprite_setPosition(global->enemies[i]->sp, global->enemies[i]->pos);
            }
            check_collision(global);
            update_score(global);
            sfRenderWindow_display(global->window.window);
            sfClock_restart(global->jump_clock.clock);
        }
    }
}

void do_jump(t_global *global)
{
    while (global->ghost.pos.y > 500) {
        global->jump_clock.time =
            sfClock_getElapsedTime(global->jump_clock.clock);
        global->jump_clock.seconds =
            global->jump_clock.time.microseconds / 1000000.0;
        if (global->jump_clock.seconds > 0.01) {
            global->ghost.pos.y -= 6;
            sfSprite_setPosition(global->ghost.sp, global->ghost.pos);
            draw_game(global);
            parallax(global);
            for (int i = 0; i < global->len; i++) {
                global->enemies[i]->pos.x -= 15;
                sfSprite_setPosition(global->enemies[i]->sp, global->enemies[i]->pos);
            }
            check_collision(global);
            update_score(global);
            sfRenderWindow_display(global->window.window);
            sfClock_restart(global->jump_clock.clock);
        }
    }
    end_jump(global);
}
