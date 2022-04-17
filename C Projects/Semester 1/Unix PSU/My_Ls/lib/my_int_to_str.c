/*
** EPITECH PROJECT, 2021
** MY_INT_TO_STR
** File description:
** Function that converts an integer to a string
*/

#include "my.h"

char *my_int_to_str(int nb)
{
    int itr, rev = nb, neg = 0;

    if (nb < 0) {
        rev *= -1;
        neg = 1;
    }
    for (itr = 0; rev > 0; rev /= 10, itr++);
    char *res = malloc(sizeof(char) * itr + 1);
    for (int itr2 = 0; itr2 < itr; itr2++) {
        int calc = nb % 10;
        nb /= 10;
        res[itr2] = calc + '0';
    }
    return (my_revstr(res));
}
