/*
** EPITECH PROJECT, 2021
** my put nbr
** File description:
** ..
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(- nb);
    } else if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
