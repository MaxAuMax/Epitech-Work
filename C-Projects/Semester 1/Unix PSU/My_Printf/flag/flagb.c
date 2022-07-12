/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagb.c
*/

#include <stdarg.h>
#include "../include/my.h"

void flagb(va_list list)
{
    my_int_to_bin(va_arg(list, int));
}
