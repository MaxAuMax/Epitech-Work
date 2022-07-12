/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** print_path.c
*/

#include "my.h"

float lenght(stack_t *c1, stack_t *c2)
{
    float res;
    res = sqrt(my_power(c2->x - c1->x, 2) + my_power(c2->y - c1->y, 2));
    return (res);
}

void draw(map_t *map)
{
    stack_t *end = &map->cell_array[my_strstrlen(map->map) - 1][strlen(map->map[0]) - 1];
    for (; end->parent != NULL; end = end->parent) {
        map->map[end->y][end->x] = 'o';
    }
    if (end->x == 0 && end->y == 0)
        map->map[0][0] = 'o';
    else
        exit(84);
}