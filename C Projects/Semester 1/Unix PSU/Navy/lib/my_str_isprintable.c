/*
** EPITECH PROJECT, 2021
** MY_STR_ISPRINTABLE
** File description:
** Function verifying if there are only printable characters
*/

#include "../includes/my.h"

int my_str_isprintable(char const *str)
{
    int	print = 0;

    if (str[print] == '\0')
        return (1);
    while (str[print] != '\0') {
        if (str[print] >= 32 && str[print] <= 126)
            print++;
        else
            return (0);
    }
    return (1);
}
