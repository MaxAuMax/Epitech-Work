/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** Task06
*/

#include "lemin.h"

int my_strcmp(char const *s1 , char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
    if (s1[i] == '\0')
        return (-1);
    return (1);
}
