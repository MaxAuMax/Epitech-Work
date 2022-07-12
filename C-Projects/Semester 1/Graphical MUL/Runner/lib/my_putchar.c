/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
