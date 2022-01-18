/*
** EPITECH PROJECT, 2021
** MY_STRUPCASE
** File description:
** Function that puts characters in lowercase
*/

#include "../includes/my.h"

char *my_strlowcase(char *str)
{
    for (int low = 0; str[low] != '\0'; low++) {
        if (str[low] >= 'A' && str[low] <= 'Z')
            str[low] += 32;
    }
    return (str);
}
