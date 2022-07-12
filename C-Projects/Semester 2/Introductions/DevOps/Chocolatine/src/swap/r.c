/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** r.c
*/

#include "my.h"

void ra(pile *pa, int yes)
{
    int temp = depile(pa);
    pile *new = malloc(sizeof(pile));
    new->first = NULL;

    while (pa->first != NULL)
        empile(new, depile(pa));
    empile(pa, temp);
    while (new->first != NULL)
        empile(pa, depile(new));

    if (yes == 1)
        my_putstr("ra ");

    free(new);
}

void rb(pile *pb, int yes)
{
    int temp = depile(pb);
    pile *new = malloc(sizeof(pile));
    new->first = NULL;

    while (pb->first != NULL)
        empile(new, depile(pb));
    empile(pb, temp);
    while (new->first != NULL)
        empile(pb, depile(new));

    if (yes == 1)
        my_putstr("rb");

    free(new);
}

void rr(pile *pa, pile *pb)
{
    ra(pa, 0);
    rb(pb, 0);
    my_putstr("rr ");
}
