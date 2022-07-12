/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** sort.c
*/



#include "my.h"

void sort_list_node(list_node li)
{
    int swapped, i;
    list_node ptr, lptr = NULL;
    if (empty(li))
        return;
    do {
        swapped = 0;
        ptr = li;
        while (ptr->next != lptr) {
            swapped = check_node(ptr);
            ptr = ptr->next;
        }
        lptr = ptr;
    }
    while (swapped);
}
