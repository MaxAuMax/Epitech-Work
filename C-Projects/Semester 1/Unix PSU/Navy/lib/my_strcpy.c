/*
** EPITECH PROJECT, 2021
** MY_STRCPY
** File description:
** Function that copies a string into another
*/

#include "../includes/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int itr = 0;

    for (itr; src[itr] != '\0'; itr++)
        dest[itr] = src[itr];
    dest[itr] = '\0';
    return (dest);
}
