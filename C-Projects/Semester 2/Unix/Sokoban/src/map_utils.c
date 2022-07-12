/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** map_utils.c
*/

#include "my.h"

int check_map(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != ' ' && map[i] != '#' && map[i] != '\n'
        && map[i] != 'X' && map[i] != 'P' && map[i] != 'O')
            return (84);
    }
    return (0);
}

char *read_map(char *av, infos *info)
{
    int r = 0;
    struct stat fstat;
    stat(av, &fstat);
    char *map = malloc(sizeof(char) * fstat.st_size + 1);
    int fd = open(av, O_RDONLY);
    if (r = read(fd, map, fstat.st_size) == -1)
        shutdown(info);
    map[fstat.st_size] = '\0';
    if (check_map(map) == 84)
        shutdown(info);
    close (fd);
    return (map);
}

int getwidth(char *map)
{
    int width = -1;
    for (int i = 0; map[i] != '\0'; i++) {
        width++;
        if (map[i] == '\n')
            return (width);
    }
    return (width);
}

int getheight(char *map)
{
    int height = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            height++;
    }
    return (height);
}
