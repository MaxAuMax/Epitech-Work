/*
** EPITECH PROJECT, 2021
** Lib
** File description:
** my_printf.c
*/

#include "lemin.h"

void flag(char *str, va_list list)
{
    str++;
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
            flag(str, list);
            str++;
        } else
            my_putchar(*str);
        str++;
    }
    va_end(list);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
}
