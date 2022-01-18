/*
** EPITECH PROJECT, 2021
** listsize
** File description:
** ..
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    while (begin != 0) {
        begin = begin->follow;
        i++;
    }
    return (c);
}
