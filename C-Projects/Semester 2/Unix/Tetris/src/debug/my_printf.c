/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** my_printf.c
*/

#include "my.h"

void flags(char *str, va_list list)
{
    if (*str == 'd')
        my_put_nbr(va_arg(list, int));
    if (*str == 'c')
        my_putchar(va_arg(list, int));
    if (*str == 's')
        my_putstr(va_arg(list, char *));
}

void my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    while (*str) {
        if (*str == '%') {
            str++;
            flags(str, list);
        } else
            my_putchar(*str);
        str++;
    }
    va_end(list);
}
