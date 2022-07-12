/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagx.c
*/

#include <stdarg.h>
#include "../include/my.h"

void flagxx(va_list list)
{
    my_int_to_lower_hex(va_arg(list, int));
}
