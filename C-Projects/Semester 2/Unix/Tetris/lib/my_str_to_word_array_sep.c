/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** my_str_to_word_array_sep.c
*/

#include "my.h"

void free_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}

int words_sep(char *str, char sep)
{
    int sp = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep)
            sp++;
    }
    sp++;

    return (sp);
}

char **my_str_to_word_array_sep(char *src, char sep)
{
    int sp = words_sep(src, sep);
    char **str = malloc(sizeof(char *) * (sp + 1));
    for (int i = 0; i < sp; i++)
        str[i] = malloc(sizeof(char) * (my_strlen(src) + 1));
    int x = 0, y = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] != sep) {
            str[x][y] = src[i];
            y++;
        } else {
            str[x][y] = '\0';
            x++;
            y = 0;
        }
    }
    str[x][y] = '\0';
    str[x + 1] = NULL;
    return (str);
}
