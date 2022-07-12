/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** add.c
*/

#include "my.h"

list_node add_back(list_node li, stack_t *cell)
{
    nodelist *node;

    node = malloc(sizeof(*node));
    if (node == NULL) {
        exit(84);
    }
    node->cell = cell;
    node->next = NULL;
    if (empty(li)) {
        return (node);
    }
    nodelist *temp;
    temp = li;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    return (li);
}