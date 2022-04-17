/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** display.c
*/

#include <stdlib.h>
#include "my.h"

void display(pile *pl)
{
    ins *new = pl->first;
    while (new != NULL) {
        my_put_nbr(new->nb);
        my_putchar(' ');
        new = new->next;
    }
    my_putchar('\n');
}
