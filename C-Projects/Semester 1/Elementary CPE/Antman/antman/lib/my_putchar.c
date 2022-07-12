/*
** EPITECH PROJECT, 2021
** MY_PUTCHAR
** File description:
** Function displaying a character
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
