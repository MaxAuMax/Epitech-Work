/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-navy-corentin.levet
** File description:
** read_map.c
*/

#include "../includes/my.h"

int read_map(char **av, variable *var)
{
    int fd_pos = open(av[1], O_RDONLY);
    if (read(fd_pos, var->pos, 32) == -1)
        return (84);
    var->pos[32] = '\0';
    close(fd_pos);
    int fd_map = open("sources/maps/map", O_RDONLY);
    if (read(fd_map, var->map, 180) == -1)
        return (84);
    var->map[179] = '\0';
    close(fd_map);
    int fd_map_en = open("sources/maps/map", O_RDONLY);
    if (read(fd_map_en, var->map2, 180) == -1)
        return (84);
    var->map2[179] = '\0';
    close(fd_map_en);

    return (0);
}

int read_map2(char **av, variable *var)
{
    int fd_pos = open(av[2], O_RDONLY);
    if (read(fd_pos, var->pos, 32) == -1)
        return (84);
    var->pos[32] = '\0';
    close(fd_pos);
    int fd_map = open("sources/maps/map", O_RDONLY);
    if (read(fd_map, var->map2, 180) == -1)
        return (84);
    var->map2[179] = '\0';
    close(fd_map);
    int fd_map_en = open("sources/maps/map", O_RDONLY);
    if (read(fd_map_en, var->map, 180) == -1)
        return (84);
    var->map[179] = '\0';
    close(fd_map_en);

    return (0);
}

int add_boats(char *map, char *pos, int i)
{
    int deb_map = 36;
    int len_line = 18;
    char num = pos[i];
    int x1 = pos[i + 2];
    int y1 = pos[i + 3] - '0';
    int x2 = pos[i + 5];
    int y2 = pos[i + 6] - '0';
    int p = deb_map + (len_line * (y1 - 1)) + ((x1 - 65) * 2) + 2;

    if (y1 == y2) {
        for (; x1 != x2; x1++, p += 2)
            map[p] = num;
        map[p] = num;
    } else if (x1 == x2) {
        for (; y1 != y2; y1++, p += len_line)
            map[p] = num;
        map[p] = num;
    } else
        return (84);

    return (0);
}

int load_boats(char *map, char *pos)
{
    int i = 0;
    if (add_boats(map, pos, i) != 0)
        return (84);
    for (; pos[i + 1] != '\0'; i++) {
        if (pos[i] == '\n') {
            i++;
            if (add_boats(map, pos, i) != 0)
                return (84);
        }
    }
    return (0);
}
