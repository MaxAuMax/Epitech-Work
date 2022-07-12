/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** Function that reverses a string (ex : abcde -> edcba)
*/

#include "my.h"

char *my_revstr(char *str)
{
    int n = 0, len = my_strlen(str) - 1;
    char tmp;

    for ( ; n < len; n++, len--) {
        tmp = str[n];
        str[n] = str[len];
        str[len] = tmp;
    }
    return (str);
}
