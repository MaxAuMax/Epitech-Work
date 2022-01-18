/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-maxime.mallet
** File description:
** line_len.c
*/

#include "include/my.h"

int line_len(char *str)
{
    int i;
    int len = 0;

    for (i = 0; str[i] != '\n'; i++) {
        len++;
    }
    len++;

    return (len);
}
