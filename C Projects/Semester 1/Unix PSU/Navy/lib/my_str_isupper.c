/*
** EPITECH PROJECT, 2021
** MY_STR_ISLOWER
** File description:
** Function verifying if there are only upcase letters
*/

#include "../includes/my.h"

int my_str_isupper(char const *str)
{
    int up = 0;

    while (str[up] != '\0') {
        if (str[up] >= 'A' && str[up] <= 'Z')
            up++;
        else
            return (0);
    }
    return (1);
}
