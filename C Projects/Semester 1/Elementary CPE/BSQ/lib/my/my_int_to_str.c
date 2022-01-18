/*
** EPITECH PROJECT, 2021
** intstr
** File description:
** ..
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_int_to_str(int nb)
{
    int bn = nb;
    int neg = 0;
    int i = 0;
    int k = 0;

    if (nb < 0)
        bn = nb * -1;
    neg = 1;
    while (bn > 0) {
        bn /= 10;
        i++;
    }
    char *res = malloc(sizeof(char) * i +1);
    while (k < i) {
        int calc = nb % 10;
        nb /= 10;
        res[k] = calc + '0';
        k++;
    }
    return my_revstr(res);
}
