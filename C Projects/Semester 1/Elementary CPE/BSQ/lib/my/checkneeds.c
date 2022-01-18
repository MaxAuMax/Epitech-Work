/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** checkneeds.c
*/

#include "../../include/my.h"

int checkneeds(char *str, int i, char *list)
{
    int space = 0;

    if (str[i] > 48 && str[i] <= 57) {
        space = str[i] - '0';
        while (str[i + 1]  >= 48 && str[i + 1] <= 57) {
            i++;
            space = (space * 10) + str[i] - '0';
        }
        i++;
        if (space > 0) {
            space = space - my_strlen(list);
            for (space; space > 0; space--)
                my_putchar(' ');
        }
    }
    return (i);
}
