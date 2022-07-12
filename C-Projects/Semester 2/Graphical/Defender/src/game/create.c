/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** create.c
*/

#include "my.h"

void create_gshop(t_global *global)
{
    gshop(&global->gshop);
    shopb(&global->shopb);
}

void set_gshop(t_global *global)
{
    set_sprite(global->gshop);
    set_sprite(global->shopb);
}