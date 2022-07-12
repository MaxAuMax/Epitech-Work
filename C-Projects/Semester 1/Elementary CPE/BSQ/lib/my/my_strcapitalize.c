/*
** EPITECH PROJECT, 2021
** strcapitalize
** File description:
** ..
*/

#include "../../include/my.h"

void *sub(char *str, int i)
{
    i++;
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'z')
            i++;
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
            i++;
        } else {
            sub (str, i);
            i = i + 2;
        }
    }
    return (str);
}
