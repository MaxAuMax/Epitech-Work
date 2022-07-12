/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** swap_list.c
*/

#include "my.h"

void swap(list_node la, list_node lb)
{
    stack_t *tcell = la->cell;
    la->cell = lb->cell;
    lb->cell = tcell;
}

int check_node(list_node ptr)
{
    if (ptr->cell->glob > ptr->next->cell->glob) {
        swap(ptr, ptr->next);
        return (1);
    }
    return (0);
}