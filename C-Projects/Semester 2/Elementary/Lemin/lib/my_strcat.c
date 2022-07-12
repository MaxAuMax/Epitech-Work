/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** my_strcat.c
*/

#include "lemin.h"

char *my_strcat(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char *str;

    str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    while (s1[i] != '\0') {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}
