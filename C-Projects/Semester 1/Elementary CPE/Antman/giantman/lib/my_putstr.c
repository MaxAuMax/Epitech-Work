/*
** EPITECH PROJECT, 2021
** MY_PUTSTR
** File description:
** Function displaying a string
*/

#include "my.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
