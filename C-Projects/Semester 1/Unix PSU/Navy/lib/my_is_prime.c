/*
** EPITECH PROJECT, 2021
** MY_IS_PRIME
** File description:
** Function that returns 1 if prime and 0 if not
*/

#include "../includes/my.h"

int my_is_prime(long long int nb)
{
    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    for (int itr = 2; itr < (nb - 1); itr++) {
        if (nb % itr == 0)
            return (0);
    }
    return (1);
}
