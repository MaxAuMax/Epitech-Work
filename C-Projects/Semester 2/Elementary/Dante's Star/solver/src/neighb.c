/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** neighb.c
*/

#include "my.h"

void neighboors(map_t *map, int x, int y)
{
    if (x > 0) {
        map->cell_array[y][x].nbr = add_back(map->cell_array[y][x].nbr, &map->cell_array[y]
        [x - 1]);
    }
    if (x < strlen(map->map[0]) - 1) {
        map->cell_array[y][x].nbr = add_back(map->cell_array[y][x].nbr, &map->cell_array[y]
        [x + 1]);
    }
    if (y > 0) {
        map->cell_array[y][x].nbr = add_back(map->cell_array[y][x].nbr, &map->cell_array[y - 1]
        [x]);
    }
    if (y < my_strstrlen(map->map) - 1) {
        map->cell_array[y][x].nbr = add_back(map->cell_array[y][x].nbr, &map->cell_array[y + 1]
        [x]);
    }
}

void set(map_t *map)
{
    for (int i = 0; map->cell_array[i] != NULL; i++) {
        for (int j = 0; map->cell_array[i][j].t != END; j++)
            neighboors(map, j, i);
    }
}