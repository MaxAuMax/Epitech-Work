/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** para.c
*/

#include "my.h"

void para_spike(t_global *global)
{
    if (global->spike.pos.x <= -1920)
        global->spike.pos.x = 0;
    else
        global->spike.pos.x -= 1;

    sfSprite_setPosition(global->spike.sp, global->spike.pos);
}

void para_demon(t_global *global)
{
    if (global->demon.pos.x <= -3840)
        global->demon.pos.x = 0;
    else
        global->demon.pos.x -= 3;

    sfSprite_setPosition(global->demon.sp, global->demon.pos);
}

void para_tiles(t_global *global)
{
    if (global->tiles.pos.x <= -1920)
        global->tiles.pos.x = 0;
    else
        global->tiles.pos.x -= 6;

    sfSprite_setPosition(global->tiles.sp, global->tiles.pos);
}

void parallax(t_global *global)
{
    global->para_clock.time = sfClock_getElapsedTime(global->para_clock.clock);
    global->para_clock.seconds =
        global->para_clock.time.microseconds / 1000000.0;

    if (global->para_clock.seconds > 0.0001) {
        para_spike(global);
        para_demon(global);
        para_tiles(global);
        sfClock_restart(global->para_clock.clock);
    }
}
