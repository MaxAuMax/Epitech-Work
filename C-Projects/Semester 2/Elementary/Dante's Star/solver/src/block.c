/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** block.c
*/

#include "my.h"

void is_block(char **map)
{
    if (map[0][0] == 'X' || map[my_strstrlen(map) - 1][strlen(map[0]) - 1] == 'X')
        exit(84);
}

void astar_decla(map_t *map)
{
    create_arrcell(map);
    set(map);
    solver(map);
    draw(map);
}