/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_FACTORIAL_REC
** File description:
** Function that computes factorial
*/

#include "../includes/my.h"

int my_compute_factorial_rec(int nb)
{
    int fact;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    fact = nb * my_compute_factorial_rec(nb - 1);
    if (fact > INT_MAX || fact < INT_MIN)
        return (0);
    return (fact);
}
