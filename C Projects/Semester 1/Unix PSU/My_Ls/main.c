/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** my_ls.c
*/

#include "include/my.h"

int main(int ac, char **av)
{
    char *way = ".";
    if (ac == 1) {
        my_ls(".", "NONE");
        return (0);
    }
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            i++;
        } else {
            way = av[i];
        }
    }
    my_ls(way, "NONE");
    return (0);
}
