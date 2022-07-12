/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** pile.c
*/

#include <stdlib.h>
#include "my.h"

void empile(t_pile *pl, int x, int y)
{
    t_elem *new = malloc(sizeof(t_elem));
    new->x = x;
    new->y = y;
    new->next = pl->first;
    pl->first = new;
}

void depile(t_pile *pl)
{
    t_elem *depi = pl->first;
    pl->first = depi->next;
    free(depi);
}
