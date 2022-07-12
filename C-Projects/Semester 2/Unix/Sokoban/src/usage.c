/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** usage.c
*/

#include "my.h"

void usage(void)
{
    int r = 0;
    struct stat fstat;
    stat("src/usage.txt", &fstat);
    char *use = malloc(sizeof(char) * fstat.st_size + 1);
    int fd = open("src/usage.txt", O_RDONLY);
    if (r = read(fd, use, fstat.st_size) == -1)
        exit(84);
    use[fstat.st_size] = '\0';
    close (fd);
    my_putstr(use);
}
