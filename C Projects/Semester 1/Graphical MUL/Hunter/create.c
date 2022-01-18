/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** create.c
*/

#include "include/my.h"

void create(t_global *global)
{
    c_bg(&global->bg);
    c_duck1(&global->duck1);
    c_shot(&global->shot);
    c_dog(&global->dog);
    c_cross(&global->cross);
    c_hit(&global->hit);
    c_round(&global->round);
    c_score(&global->score);
    c_hitr(&global->hitr);
    c_shotr(&global->shotr);
}
