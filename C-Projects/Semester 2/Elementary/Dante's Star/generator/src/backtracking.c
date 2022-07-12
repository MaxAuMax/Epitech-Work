/*
** EPITECH PROJECT, 2021
** generator
** File description:
** backtracking.c
*/

#include "my.h"

char **backtracking(t_lines *lines)
{
    int i = 0;
    char **str = malloc(sizeof(char *) * lines->y + 2);
    for (; i < lines->y + 2; i++)
        str[i] = malloc(sizeof(char) * lines->x + 2);
    str[i] = NULL;
    int y = 0;
    for (; y < lines->y; y++) {
        int idx = 0;
        for (; idx < lines->x; idx++)
            str[y][idx] = 'X';
        str[y][idx] = 'Z';
        idx++;
        str[y][idx] = '\0';
    }
    int r = 0;
    for (; r < lines->x + 1; r++)
        str[y][r] = 'Z';
    str[y][r] = '\0';
    return (str);
}
