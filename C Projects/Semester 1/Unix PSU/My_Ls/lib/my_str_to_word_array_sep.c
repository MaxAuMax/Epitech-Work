/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** my_str_to_word_array_sep.c
*/

#include "my.h"

int is_charac_sep(char ch, char sep)
{
    if (ch == '\0')
        return (0);
    if (ch >= '!' && ch <= '~' && ch != sep)
        return (1);
    return (0);
}

int count_sep(char *str, char sep)
{
    int a = 0, b = 0;

    for (; str[b] != '\0'; b++) {
        if (is_charac_sep(str[b], sep) == 1 &&
            is_charac_sep(str[b + 1], sep) == 0)
            a++;
    }
    return (a);
}

char **my_str_to_word_array_sep(char *str, char sep)
{
    char **res = malloc(sizeof(char *) * (count_sep(str, sep) + 1));
    int a = 0, b = 0, len = 0;

    if (!res)
        return (0);
    for (int b = 0; str != 0 && str[b] != '\0'; b++) {
        if (is_charac_sep(str[b], sep))
            len++;
        if (is_charac_sep(str[b], sep)
            && is_charac_sep(str[b + 1], sep) == 0) {
            res[a] = malloc(len + 1);
            my_strncpy(res[a], &str[b - len + 1], len);
            len = 0;
            a++;
        }
    }
    res[a] = '\0';
    return (res);
}
