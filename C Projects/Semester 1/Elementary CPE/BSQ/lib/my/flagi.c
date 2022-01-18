/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagi.c
*/

#include <stdarg.h>
#include "../../include/my.h"

int flagi(va_list list)
{
    int value = va_arg(list, int);

    if (value > -2147483648 && value < 2147483648)
        my_put_nbr(value);
    else
        return (84);
}
