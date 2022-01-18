/*
** EPITECH PROJECT, 2021
** HELP
** File description:
** Function displaying help for navy
*/

#include "../includes/my.h"

void help(void)
{
    char buffer[201];

    int fd = open("sources/help.txt", O_RDONLY);
    read(fd, buffer, 201);
    buffer[201] = '\0';
    my_printf("%s", buffer);
    close(fd);
}
