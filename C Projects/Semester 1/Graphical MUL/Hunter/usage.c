/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** usage.c
*/
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "include/my.h"

void usage(void)
{
    char str[927];
    int fd = open("files/usage.txt", O_RDONLY);
    read(fd, str, 926);
    str[927] = '\0';
    my_putstr(str);
    close(fd);
}
