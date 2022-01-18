/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** check_hit.c
*/

#include "include/my.h"

void check_hit(t_global *global)
{
    if (global->window.hit <= 10)
        global->hitr.rect.width += 8;
    else {
        my_printf("You WON the round !\n");
        sfWindow_close(global->window.window);
    }
}