/*
** EPITECH PROJECT, 2021
** MY_STR_ISNUM
** File description:
** Function that verifies if there are only numbers
*/

#include "../includes/my.h"

int my_str_isnum(char const *str)
{
    int	num = 0;

    while (str[num] != '\0') {
        if (str[num] >= '0' && str[num] <= '9')
            num++;
        else
            return (0);
    }
    return (1);
}
