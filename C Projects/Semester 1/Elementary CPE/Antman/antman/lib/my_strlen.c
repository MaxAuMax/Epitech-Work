/*
** EPITECH PROJECT, 2021
** MY_STRLEN
** File description:
** Function that returns the length of a string
*/

#include "my.h"

int my_strlen(char *str)
{
    int len = 0;
    for (len; str[len] != '\0'; len++);
    return (len);
}

int my_strstrlen(char **str)
{
    int i = 0;

    while (*str) {
        i++;
        *str++;
    }

    return (i);
}
