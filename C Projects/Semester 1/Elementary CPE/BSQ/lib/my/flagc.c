/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagc.c
*/

#include <stdarg.h>
#include "../../include/my.h"

void flagc(va_list list)
{
    my_putchar(va_arg(list, int));
}
