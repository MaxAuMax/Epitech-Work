/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** my_show_word_array.c
*/

#include "my.h"

int word_len(char *str, int i)
{
    for (; str[i] != '\0'; i++) {
        if (is_charac(str[i], 1) != 1)
            return (i);
    }
    return (i);
}

int is_charac(char ch, int status)
{
    if (status == 1) {
        if (ch >= '!' && ch <= '~')
            return (1);
    }
    return (0);
}

int	count(char *str)
{
    int	i = 0;
    int	y = 0;

    for (; str[i] != '\0'; i++) {
        if (is_charac(str[i], 1) == 1 && is_charac(str[i + 1], 1) != 1)
            y = y + 1;
    }
    return (y);
}

char **my_str_to_word_array(char *str)
{
    int	i = 0;
    int	x = 0;
    int	cnt = count(str);
    char **new = malloc(sizeof(char *) * cnt + 1);

    for (int y = 0; y < cnt; y++, i++) {
        x = 0;
        new[y] = malloc(sizeof(char) * word_len(str, i));
        while (str[i] != '\0' && is_charac(str[i], 1) != 0) {
            new[y][x] = str[i];
            x++;
            i++;
        }
        new[y][x] = '\0';
    }

    return (new);
}
