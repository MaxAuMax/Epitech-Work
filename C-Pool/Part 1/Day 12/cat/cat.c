/*
** EPITECH PROJECT, 2021
** cat
** File description:
** ..
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../include/my.h"

int main(int ac, char **av)
{
    int prt = 0;
    int i = 1;
    char size[1];

    while (i < ac) {
        prt = open(av[i], O_RDONLY);

        while (read(prt, size, 1) != 0) {
            my_putstr(size);
        }
        i++;
        close(prt);
    }
    return (0);
}
