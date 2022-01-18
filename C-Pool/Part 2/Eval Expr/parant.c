/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** parant.c
*/

#include "include/my.h"

int parant(char **str)
{
    int nb = 0, neg = 1;

    if (*str[0] == '+' || *str[0] == '-') {
        if (*str[0] == '-')
            neg = -1;
        (*str)++;
    }
    if (*str[0] == '(') {
        (*str)++;
        nb = add(str);
        if (*str[0] == ')')
            (*str)++;
        return (nb * neg);
    }
    while (*str[0] >= '0' && *str[0] <= '9') {
        nb = (nb * 10) + (*str[0] - '0');
    (*str)++;
    }
    return (nb * neg);
}
