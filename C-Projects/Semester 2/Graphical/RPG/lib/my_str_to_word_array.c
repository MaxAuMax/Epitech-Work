/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** my_str_to_word_array.c
*/

#include "rpg.h"

int words(char *str)
{
    int sp = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            sp++;
    }
    sp++;

    return (sp);
}

char **my_str_to_word_array(char *src)
{
    int sp = words(src);
    char **str = malloc(sizeof(char *) * (sp + 1));
    for (int i = 0; i < sp; i++)
        str[i] = malloc(sizeof(char) * (my_strlen(src) + 1));
    int x = 0, y = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] != ' ') {
            str[x][y] = src[i];
            y++;
        } else {
            x++;
            y = 0;
        }
    }
    str[x + 1] = NULL;
    return (str);
}
