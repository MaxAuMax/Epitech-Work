/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-antman-maxime.mallet
** File description:
** algorithm.c
*/

#include "my.h"

void check_inside(int i, char **arr, char **res)
{
    int rlen = my_strstrlen(res);

    for (int y = 0; y < rlen; y++) {
        if (my_strcmp(arr[i], res[y]) == 0) {
            my_put_nbr(y);
            my_putchar('.');
            y = rlen;
        }
    }
}

void output(char **arr, char **res)
{
    int alen = my_strstrlen(arr);
    int rlen = my_strstrlen(res);

    for (int at = 0; at < rlen; at++) {
        my_putstr(res[at]);
        my_putchar('.');
    }
    for (int i = 0; i < alen; i++) {
        check_inside(i, arr, res);
    }
}

void find_diff(char **arr)
{
    int i = 1, y = 0, cpt = 0, egal = 0;
    char **temp = malloc(sizeof(char *) * my_strstrlen(arr) + 1);

    temp[0] = arr[0];
    for (; i < my_strstrlen(arr); i++) {
        egal = 0;
        for (y = cpt; y >= 0; y--) {
            if (my_strcmp(arr[i], temp[y]) == 0) {
                egal = 1;
                break;
            }
        }
        if (egal == 0) {
            cpt++;
            temp[cpt] = arr[i];
        }
    }
    char **res = malloc(sizeof(char *) * cpt + 1);
    for (int itr = 0; itr <= cpt; itr++)
        res[itr] = temp[itr];
    output(arr, res);
}
