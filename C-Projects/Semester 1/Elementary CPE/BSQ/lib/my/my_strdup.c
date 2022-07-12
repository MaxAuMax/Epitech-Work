/*
** EPITECH PROJECT, 2021
** poolday
** File description:
** my_strdup.c
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strdup(char *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    my_strcpy(dest, src);
    return (dest);
}
