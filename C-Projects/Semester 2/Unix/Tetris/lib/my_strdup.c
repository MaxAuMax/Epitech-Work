/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    while (str[i] != '\0') {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}
