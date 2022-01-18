/*
** EPITECH PROJECT, 2021
** my putstr
** File description:
** Task02
*/

#include "../../include/my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
