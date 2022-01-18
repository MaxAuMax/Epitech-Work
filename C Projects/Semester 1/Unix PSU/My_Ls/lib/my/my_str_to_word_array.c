/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-maxime.mallet
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include "../../include/my.h"

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    int m = 0;
    int len = my_strlen(str);
    char **tmp = malloc(sizeof(char *) * 10);

    for (int n = 0; n < 10; n++)
        tmp[n] = malloc(sizeof(char) * 50);
    while (j < len) {
        m = 0;
        while ((str[j] == ':') || (str[j] == ' ') || (str[j] == '\n'))
            j++;
        while ((str[j] != ':') && (str[j] != ' ') && (str[j] != '\n'))
            tmp[i][m++] = str[j++];
        tmp[i][m + 1] = '\0';
        i++;
    }
    tmp[i] = NULL;
    return (tmp);
}