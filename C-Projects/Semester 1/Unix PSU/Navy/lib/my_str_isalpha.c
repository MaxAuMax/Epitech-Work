/*
** EPITECH PROJECT, 2021
** MY_STR_ISALPHA
** File description:
** Function that verifies if there are only letters
*/

#include "../includes/my.h"

int my_str_isalpha(char const *str)
{
    int	alpha = 0;

    while (str[alpha] != '\0') {
        if ((str[alpha] >= 'A' && str[alpha] <= 'Z') ||
            (str[alpha] >= 'a' && str[alpha] <= 'z'))
            alpha++;
        else
            return (0);
    }
    return (1);
}
