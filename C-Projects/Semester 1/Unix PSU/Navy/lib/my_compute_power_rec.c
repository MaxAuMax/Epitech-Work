/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_POWER_REC
** File description:
** Function that computes a number to an exposant
*/

#include "../includes/my.h"

int my_compute_power_rec(int nb, int p)
{
    int pow;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    pow = nb * my_compute_power_rec(nb, p - 1);
    if (pow > INT_MAX || pow < INT_MIN)
        return (0);
    return (pow);
}
