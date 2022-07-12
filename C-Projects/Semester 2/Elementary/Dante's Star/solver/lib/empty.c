/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** empty.c
*/

#include "my.h"

list_node new_list(void)
{
    return (NULL);
}

bool empty(list_node list)
{
    if (list == NULL)
        return (true);
    return (false);
}