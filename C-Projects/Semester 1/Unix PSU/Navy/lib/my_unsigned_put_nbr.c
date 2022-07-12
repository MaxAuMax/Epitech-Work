/*
** EPITECH PROJECT, 2021
** MY_UNSIGNED_PUT_NBR
** File description:
** Put nbr for unsigned
*/

#include "../includes/my.h"

void my_unsigned_put_nbr(unsigned int nb)
{
    if (nb >= 10) {
        my_unsigned_put_nbr(nb / 10);
        my_unsigned_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
}
