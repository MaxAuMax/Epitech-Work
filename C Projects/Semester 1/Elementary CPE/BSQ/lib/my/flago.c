/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flago.c
*/

#include <stdarg.h>
#include "../../include/my.h"

void flago(va_list list)
{
    my_int_to_oct(va_arg(list, int));
}
