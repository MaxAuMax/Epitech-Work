/*
** EPITECH PROJECT, 2021
** CONVERT_BASE
** File description:
** Function that converts bases
*/

#include "../includes/my.h"

char *my_convert_base(unsigned int nb, int base)
{
    static char bases[] = "0123456789ABCDEF", buffer[4096];
    char *ptr;

    ptr = &buffer[4095];
    *ptr = '\0';
    for (nb; nb != 0; nb /= base)
        *--ptr = bases[nb % base];
    return (ptr);
}
