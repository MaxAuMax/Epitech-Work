/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** Function that concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int itr = 0, len = my_strlen(dest);
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 1);

    for (; dest[itr] != '\0'; itr++)
        str[itr] = dest[itr];
    for (int ita = 0; src[ita] != '\0'; ita++, itr++)
        str[itr] = src[ita];
    return (str);
}
