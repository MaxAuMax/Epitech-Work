/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** my_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
    int mod = 0;
    while (str[mod] != '\0') {
        mod = mod + 1;
    }
    return (mod);
}
