/*
** EPITECH PROJECT, 2021
** setfirst
** File description:
** ..
*/

#include "include/my.h"

void set_first_big(num_t *nb1, num_t *nb2)
{
    char *temp;

    if (my_strlen(nb1->v) < my_strlen(nb2->v)) {
        temp = nb1->v;
        nb1->v = nb2->v;
        nb2->v = temp;
    }
    nb1->len = my_strlen(nb1->v) - 1;
    nb2->len = my_strlen(nb2->v) - 1;
}
