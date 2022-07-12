/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** my_atoi.c
*/

#include "lemin.h"

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
    || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-') {
        neg = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}

char *my_itoa(int nb)
{
    int i = 0;
    int neg = 1;
    char *str = malloc(sizeof(char) * 12);

    if (nb < 0) {
        neg = -1;
        nb = -nb;
    }
    while (nb > 0) {
        str[i] = nb % 10 + '0';
        nb = nb / 10;
        i++;
    }
    if (neg == -1)
        str[i++] = '-';
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

char **my_arrset(char **arr)
{
    int i = 0;

    while (arr[i]) {
        arr[i] = NULL;
        i++;
    }
    return (arr);
}
