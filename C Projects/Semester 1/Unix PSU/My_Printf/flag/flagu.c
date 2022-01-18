/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagu.c
*/

#include <stdarg.h>
#include "../include/my.h"

void flagu(va_list list)
{
    unsigned int value = va_arg(list, int);
    if (value < 0 )
        value = value * - 1;
    my_put_nbr(value);
}
