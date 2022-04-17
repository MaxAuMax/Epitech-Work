/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** rr.c
*/

#include "my.h"

void rra(pile *pa, int yes)
{
    pile *new = malloc(sizeof(pile));
    new->first = NULL;

    while (pa->first->next != NULL)
        empile(new, depile(pa));

    int dep = depile(pa);

    while (new->first != NULL)
        empile(pa, depile(new));
    empile(pa, dep);

    if (yes == 1)
        my_putstr("rra ");

    free(new);
}

void rrb(pile *pb, int yes)
{
    pile *new = malloc(sizeof(pile));
    new->first = NULL;

    while (pb->first->next != NULL)
        empile(new, depile(pb));

    int dep = depile(pb);

    while (new->first != NULL)
        empile(pb, depile(new));
    empile(pb, dep);

    if (yes == 1)
        my_putstr("rrb ");

    free(new);
}

void rrr(pile *pa, pile *pb)
{
    rra(pa, 0);
    rrb(pb, 0);
    my_putstr("rr ");
}
