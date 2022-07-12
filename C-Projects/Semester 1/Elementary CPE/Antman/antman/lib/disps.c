/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** dispS.c
*/

#include "my.h"

void disps(char str)
{
    if (str < 8) {
        my_putstr("\\00");
        int value = str;
        my_int_to_oct(value);
    } else if (str < 32 && str >= 8) {
        my_putstr("\\0");
        int value = str;
        my_int_to_oct(value);
    } else {
        my_putchar('\\');
        int value = str;
        my_int_to_oct(value);
    }
}
