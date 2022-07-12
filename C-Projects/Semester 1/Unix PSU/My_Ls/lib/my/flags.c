/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flags.c
*/

#include <stdarg.h>
#include "../../include/my.h"

void flags(va_list list)
{
    my_putstr(va_arg(list, char *));
}
