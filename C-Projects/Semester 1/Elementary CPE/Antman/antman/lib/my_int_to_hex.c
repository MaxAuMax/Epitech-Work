/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** my_int_to_hex.c
*/

#include "my.h"

void my_int_to_hex(int n)
{
    char value[100];
    int i = 0;

    while (n != 0) {
        int temp = 0;
        temp = n % 16;

        if (temp < 10) {
            value[i] = temp + 48;
            i++;
        }
        else {
            value[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        my_putchar(value[j]);
}
