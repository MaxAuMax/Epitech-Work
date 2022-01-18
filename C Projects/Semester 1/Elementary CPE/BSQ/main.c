/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-maxime.mallet
** File description:
** main.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "include/my.h"

int errors(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'o' && str[i] != '\n' && str[i] != '.');
            return (84);
    }
    return (0);
}

int main(int argc, char const **argv)
{
    struct stat fstat;
    stat(argv[1], &fstat);
    char *str = malloc(fstat.st_size + 1);
    long double r = 0;
    long double fd = open(argv[1], O_RDONLY);
    int sta = 0;
    while (r = read(fd, str, fstat.st_size) != 0) {
        if (r == -1)
            return (84);
    }
    //str[fstat.st_size] = '\0';
    for (str; str[sta] != '\n'; sta++);
    sta++;
    char *new = str + sta;
    //(errors(new) == 0) ? my_printf("%s", bsq(new)) : my_putchar('c');
    my_putstr(new);
    close(fd);
    return (0);
}
