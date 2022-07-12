/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** disp_strdarg.c
*/

#include "my.h"

void disp5(char s, va_list list)
{
    if (s == 'o')
        my_int_to_oct(va_arg(list, int));
    else if (s == '%')
        my_putchar('%');
    else
        my_int_to_hex(va_arg(list, int));
}

void disp4(char s, va_list list)
{
    if (s == 'x' || s == 'X')
        my_int_to_hex(va_arg(list, int));
    else if (s == 'i' || s == 'd')
        my_put_nbr(va_arg(list, int));
    else
        disp5(s, list);
}

void disp3(char s, va_list list)
{
    if (s == 'b')
        my_int_to_bin(va_arg(list, int));
    else if (s == 'u') {
        unsigned int value = va_arg(list, int);
        if (value < 0)
            value = value * -1;
        my_put_nbr(value);
    } else
        disp4(s, list);
}

void disp2(char s, va_list list)
{
    if (s == 'S') {
        char *str = va_arg(list, char *);
        for (int z = 0; str[z] != '\0'; z++) {
            if (str[z] < 32 || str[z] >= 127)
                disps(str[z]);
            else
                my_putchar(str[z]);
        }
    } else
        disp3(s, list);
}

void disp_stdarg(char s, va_list list)
{
    if (s == 'c')
        my_putchar(va_arg(list, int));
    else if (s == 's')
        my_putstr(va_arg(list, char *));
    else
        disp2(s, list);
}
