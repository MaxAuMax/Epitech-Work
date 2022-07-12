/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** p.c
*/

#include "my.h"

void pa(pile *pa, pile *pb, int yes)
{
    int dep = depile(pb);
    empile(pa, dep);
    if (yes == 1)
        my_putstr("pa ");
}

void pb(pile *pa, pile *pb, int yes)
{
    int dep = depile(pa);
    empile(pb, dep);
    if (yes == 1)
        my_putstr("pb ");
}
