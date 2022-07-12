/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** update_score.c
*/

#include "my.h"

void update_score(t_global *global)
{
    global->score_clock.time =
        sfClock_getElapsedTime(global->score_clock.clock);
    global->score_clock.seconds =
        global->score_clock.time.microseconds / 1000000.0;

    if (global->score_clock.seconds > 0.3) {
        global->score_num.value += 25;
        global->score_num.str = my_int_to_str(global->score_num.value);
        sfText_setString(global->score_num.text, global->score_num.str);
        if (my_strlen(global->score_num.str) > global->score_num.len) {
            global->score_num.len = my_strlen(global->score_num.str);
            sfVector2f new = sfText_getPosition(global->score_num.text);
            new.x -= 10;
            sfText_setPosition(global->score_num.text, new);
        }
        sfClock_restart(global->score_clock.clock);
    }
}
