/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** reset_clock.c
*/

#include "include/my.h"

void reset_clock(t_global *global)
{
        global->duck_clock.time =
            sfClock_getElapsedTime(global->duck_clock.clock);
        global->duck_clock.seconds =
            global->duck_clock.time.microseconds / 1000000.0;
        global->dog_clock.time =
            sfClock_getElapsedTime(global->dog_clock.clock);
        global->dog_clock.seconds =
            global->dog_clock.time.microseconds / 1000000.0;
}
