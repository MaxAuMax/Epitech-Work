/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** Tasks
*/

#include "lemin.h"

int my_strlen(char const *str)
{
    int j = 0;

    while (str[j] != '\0')
        j++;
    return (j);
}

void my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char c;

    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j -= 1;
    }
}
