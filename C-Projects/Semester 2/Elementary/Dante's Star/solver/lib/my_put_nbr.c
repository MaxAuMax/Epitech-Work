/*
** EPITECH PROJECT, 2021
** MY_PUT_NBR
** File description:
** Function that displays a number
*/

#include "my.h"

void my_put_nbr(long long int nb)
{
    int div = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    for (nb; (nb / div) >= 10; div *= 10);
    for (div; div > 0; div /= 10)
        my_putchar((nb / div) % 10 + 48);
}

int my_power(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    if (p >= 1) {
        if (nb > 999999999) {
            return (0);
        }
        return (nb * my_power(nb, p - 1));
    } else {
        return (1);
    }
}
