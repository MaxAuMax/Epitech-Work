/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** clock.c
*/

#include "my.h"

void reset_clock_game(t_global *global)
{
        global->ghost_clock.time =
            sfClock_getElapsedTime(global->ghost_clock.clock);
        global->ghost_clock.seconds =
            global->ghost_clock.time.microseconds / 1000000.0;
}

void clock_game(t_global *global)
{
    if (global->ghost_clock.seconds > 0.1) {
        move_rect(&global->ghost, 50, 10, 210);
        sfClock_restart(global->ghost_clock.clock);
    }
}
