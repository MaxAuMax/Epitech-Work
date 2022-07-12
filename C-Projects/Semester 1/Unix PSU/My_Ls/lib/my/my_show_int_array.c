/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-bspushswap-maxime.mallet
** File description:
** my_show_int_array.c
*/

#include "../../include/my.h"

void my_show_int_array(int *array)
{
    for (int i = 0; array[i] != 0; i++) {
        my_put_nbr(array[i]);
        my_putchar('\n');
    }
}
