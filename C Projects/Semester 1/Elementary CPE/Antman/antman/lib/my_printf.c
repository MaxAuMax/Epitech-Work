/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf.c
*/

#include "my.h"

void my_printf(char *str, ...)
{
    va_list list;

    va_start(list, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            disp_stdarg(str[i], list);
        } else
            my_putchar(str[i]);

    }
    va_end(list);
}
