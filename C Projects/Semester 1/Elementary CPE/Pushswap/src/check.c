/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-maxime.mallet
** File description:
** check.c
*/

#include "my.h"

int sorted(int ac, char **av)
{
    for (int i = 1; i < ac - 1; i++) {
        if (my_str_to_int(av[i]) > my_str_to_int(av[i + 1]))
            return (1);
    }
    return (0);
}

int is_digit(char c, int len)
{
    if (c == '+' || c == '-') {
        if (len == 1)
            return (84);
        return (0);
    }
    if (c >= '0' && c <= '9')
        return (0);
    return (84);
}

int check(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        int check = 0;
        for (int k = 0; av[i][k] != '\0'; k++) {
            check += is_digit(av[i][k], my_strlen(av[i]));
        }
        if (check != 0)
            return (84);
    }
    return (0);
}
