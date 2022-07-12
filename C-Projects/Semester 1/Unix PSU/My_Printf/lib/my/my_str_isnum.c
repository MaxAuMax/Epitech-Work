/*
** EPITECH PROJECT, 2021
** str_isnum
** File description:
** ..
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (my_strlen(str) == 0)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}
