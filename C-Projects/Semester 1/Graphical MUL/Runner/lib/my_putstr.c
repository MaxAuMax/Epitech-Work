/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
