/*
** EPITECH PROJECT, 2021
** MY_STRUPCASE
** File description:
** Function that puts characters in uppercase
*/

#include "../includes/my.h"

char *my_strupcase(char *str)
{
    for (int up = 0; str[up] != '\0'; up++) {
        if (str[up] >= 'a' && str[up] <= 'z')
            str[up] -= 32;
    }
    return (str);
}
