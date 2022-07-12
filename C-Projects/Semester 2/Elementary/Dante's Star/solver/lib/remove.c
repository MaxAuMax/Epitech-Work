/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** remove.c
*/

#include "my.h"

list_node remove_front(list_node list)
{
    nodelist *node;

    if (empty(list))
        return (list);
    node = malloc(sizeof(*node));
    if (node == NULL)
        exit(84);
    node = list->next;
    free(list);
    list = NULL;
    return (node);
}