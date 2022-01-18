/*
** EPITECH PROJECT, 2021
** MY_STR_ISLOWER
** File description:
** Function verifying if there are only lowcase letters
*/

#include "../includes/my.h"

int my_str_islower(char const *str)
{
    int low = 0;

    while (str[low] != '\0') {
        if (str[low] >= 'a' && str[low] <= 'z')
            low++;
        else
            return (0);
    }
    return (1);
}
