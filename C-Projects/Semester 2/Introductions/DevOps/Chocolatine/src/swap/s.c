/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** s.c
*/

#include "my.h"

void sa(pile *pa, int yes)
{
    int value = pa->first->nb;
    pa->first->nb = pa->first->next->nb;
    pa->first->next->nb = value;
    if (yes == 1)
        my_putstr("sa ");
}

void sb(pile *pb, int yes)
{
    int value = pb->first->nb;
    pb->first->nb = pb->first->next->nb;
    pb->first->next->nb = value;
    if (yes == 1)
        my_putstr("sb ");
}

void sc(pile *pa, pile *pb)
{
    sa(pa, 0);
    sb(pb, 0);
    my_putstr("sc ");
}
