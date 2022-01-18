/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** check_bul.c
*/

#include "include/my.h"

void check_bul(t_global *global)
{
    if (global->window.bul > 0)
        global->shot.rect.width -= 9;
    else {
        my_printf("No more bullets ! Try again !\n");
        sfWindow_close(global->window.window);
    }
}