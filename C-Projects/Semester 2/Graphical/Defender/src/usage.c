/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** usage.c
*/

#include "my.h"

void usage(void)
{
    char buf[463];
    int fd = open("src/usage.txt", O_RDONLY);
    read(fd, buf, 463);
    buf[463] = '\0';
    write(1, buf, my_strlen(buf));
}
