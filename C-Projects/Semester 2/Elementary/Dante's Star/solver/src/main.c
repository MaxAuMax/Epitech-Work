/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** main.c
*/


#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    map_t map;
    struct stat buf;
    stat(av[1], &buf);
    int fd = open(av[1], O_RDONLY && O_WRONLY);
    map.mapstart = malloc(buf.st_size);
    read(fd, map.mapstart, buf.st_size);
    map.map = my_str_to_word_array_sep(map.mapstart, '\n');
    is_block(map.map);
    astar_decla(&map);
    for (int i = 0; map.map[i] != NULL; i++) {
        printf("%s", map.map[i]);
        if (map.map[i + 1] != NULL)
            printf("\n");
    }
}
