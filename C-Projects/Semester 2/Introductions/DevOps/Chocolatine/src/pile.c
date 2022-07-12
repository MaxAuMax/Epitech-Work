/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** pile.c
*/

#include <stdlib.h>
#include "my.h"

void empile(pile *pl, int nb)
{
    ins *new = malloc(sizeof(ins));
    new->nb = nb;
    new->next = pl->first;
    pl->first = new;
}

int depile(pile *pl)
{
    int dep = 0;
    ins *depi = pl->first;
    dep = depi->nb;
    pl->first = depi->next;
    free(depi);

    return (dep);
}
