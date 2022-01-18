/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagss.c
*/

#include <stdarg.h>
#include "../include/my.h"

void flagss(va_list list)
{
    char *str = va_arg(list, char *);
    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] < 32 || str[z] >= 127)
            disps(str[z]);
        else
            my_putchar(str[z]);
    }
}
