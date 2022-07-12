/*
** EPITECH PROJECT, 2021
** malooc
** File description:
** main.c
*/

#include "lemin.h"

char **my_str_to_word_array(char *str, char c)
{
    int i = 0, j = 0, k = 0;
    char **arr = malloc(sizeof(char *) * (my_strlen(str) + 1));

    while (str[i]) {
        if (str[i] == c) {
            i++;
            continue;
        }
        arr[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (str[i] != c && str[i] != '\0') {
            arr[j][k] = str[i];
            i++;
            k++;
        }
        arr[j][k] = '\0';
        j++;
        k = 0;
    }
    arr[j] = NULL;
    return (arr);
}

void free_array(char **table)
{
    for (int i = 0; table[i] != NULL; i++) {
        free(table[i]);
    }
    free(table);
}

int my_arrlen(char **array)
{
    int i = 0;
    while (array[i]) {
        i++;
    }
    return i;
}

void my_arr_mem_set(char **arr, int nb)
{
    for (int i = 0; i < nb; i++)
        arr[i] = NULL;
}

void my_putarr(char **arr)
{
    int i = 0;

    while (arr[i]) {
        my_printf("%s\n", arr[i]);
        i++;
    }
}
