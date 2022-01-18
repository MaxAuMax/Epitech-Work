/*
** EPITECH PROJECT, 2021
** MY_STR_TO_INT
** File description:
** Function that converts a string into an integer
*/

#include "my.h"

int my_str_to_int(char *str)
{
    int y = 0;
    int new = 0;

    new = str[y] - '0';
    while (str[y] != '\0') {
        if (str[y + 1] >= '0' && str[y + 1] <= '9') {
            y++;
            new = new * 10;
            new = new + str[y] - '0';
        } else {
            y++;
        }
    }
    return (new);
}
