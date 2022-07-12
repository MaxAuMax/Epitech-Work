/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** Function that concatenates two strings
*/

#include "../includes/my.h"

char *my_strcat(char *dest, char const *src)
{
    int itr = 0, len = my_strlen(dest);

    while (src[itr] != '\0')
        dest[itr + 1] = src[itr + 1];
    dest[itr + 1] = '\0';
    return (dest);
}
