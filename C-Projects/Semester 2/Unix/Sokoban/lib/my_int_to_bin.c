/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_int_to_bin.c
*/

#include "my.h"

void my_int_to_bin(int n)
{
    if (n > 1)
        my_int_to_bin(n / 2);
    my_putchar((n % 2) + '0');
}