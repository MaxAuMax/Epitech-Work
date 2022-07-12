/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** destroy.c
*/

#include "my.h"

void destroy_all(t_global *global)
{
    sfSprite_destroy(global->moon.sp);
    sfSprite_destroy(global->spike.sp);
    sfSprite_destroy(global->demon.sp);
    sfSprite_destroy(global->tiles.sp);
    sfSprite_destroy(global->ghost.sp);
    sfSprite_destroy(global->menu_bg.sp);
    sfSprite_destroy(global->title.sp);
    sfSprite_destroy(global->play.sp);
    sfSprite_destroy(global->settings.sp);
    sfSprite_destroy(global->quit.sp);
    sfSprite_destroy(global->back.sp);
    sfSprite_destroy(global->select.sp);
    sfSprite_destroy(global->arrows.sp);
    sfSprite_destroy(global->resume.sp);
    sfClock_destroy(global->ghost_clock.clock);
    sfClock_destroy(global->jump_clock.clock);
    sfClock_destroy(global->para_clock.clock);
    sfClock_destroy(global->score_clock.clock);
    sfText_destroy(global->score.text);
    sfText_destroy(global->score_num.text);
    sfMusic_destroy(global->music);
    sfMusic_destroy(global->jump);
    sfRenderWindow_destroy(global->window.window);
}
