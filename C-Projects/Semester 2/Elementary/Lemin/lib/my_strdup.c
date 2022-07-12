/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** my_strdup.c
*/

#include "lemin.h"

char *my_strdup(char *str)
{
    int i = 0;
    char *str2;

    str2 = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i] != '\0') {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    return (str2);
}
