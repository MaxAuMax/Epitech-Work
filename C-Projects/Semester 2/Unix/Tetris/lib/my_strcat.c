/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *str, char *str2)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) + my_strlen(str2) + 1));
    int i = 0, j = 0;

    for (; str[i] != '\0'; i++)
        new[i] = str[i];

    for (; str2[j] != '\0'; i++, j++)
        new[i] = str2[j];

    new[i] = '\0';
    return (new);
}
