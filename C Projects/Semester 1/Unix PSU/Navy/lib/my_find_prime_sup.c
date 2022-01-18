/*
** EPITECH PROJECT, 2021
** MY_FIND_PRIME_SUP
** File description:
** Function that gives the first prime + or = at nb given as parameter
*/

#include "../includes/my.h"

int my_find_prime_sup(long long int nb)
{
    for (int a = nb; a < LLONG_MAX; a++) {
        int b = my_is_prime(a);
        if (b == 1)
            return (a);
    }
}
