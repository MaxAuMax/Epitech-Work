/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myprintf-maxime.mallet
** File description:
** flagp.c
*/

#include <stdarg.h>
#include "../../include/my.h"

int flagp(va_list list)
{
    int i = 0;

    i = i + my_putstr("0x");
    i = i + my_put_pointer(va_arg(list, long), "0123456789abcdef");
    return (i);
}

int my_put_pointer(long nbr, char *base)
{
    int i = 0;
    int size = 0;
    long nb = 0;
    if (nbr < 0) {
    	nbr = - nbr;
    	i += 1;
    	my_putchar('-');
    }
    size = my_strlen(base);
    if (nbr > 0) {
    	nb = nbr;
    	nbr = nbr / size;
    	i = i + my_put_pointer(nbr, base);
    	i++;
    	my_putchar(base[nb % size]);
    }
    return (i);
}
