/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include "../../include/my.h"

int check(char *str, int i, va_list list)
{
    int no = 1;
    void (*fonct[12])(va_list) = {flagc, flagi, flagi, flags, flagxx,
        flagx, flagb, flago, flagu, flagss, flagp, flagpo};
    char *flag = "cidsxXbouSp%";
    for (int j = 0; flag[j] != '\0'; j++) {
        if (str[i] == flag[j]) {
            (*fonct[j])(list);
            no = 0;
        }
    }
    if (no == 1) {
        my_putchar('%');
        my_putchar(str[i]);
    }
    return (i);
}

void my_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            i = check(str, i, list);
        } else
            my_putchar(str[i]);

    }
    va_end(list);
}
