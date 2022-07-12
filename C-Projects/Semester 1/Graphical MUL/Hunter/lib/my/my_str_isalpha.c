/*
** EPITECH PROJECT, 2021
** ..
** File description:
** ..
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
