/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** struct.c
*/

#include "my.h"

stack_t assign(char c, int x, int y)
{
    stack_t cell;
    cell.x = x;
    cell.y = y;
    cell.loc = 9999;
    cell.glob = 9999;
    cell.parent = NULL;
    cell.nbr = new_list();
    if (c == '*')
        cell.t = FREE;
    else if (c == 'X')
        cell.t = WALL;
    return (cell);
}

void create_arrcell(map_t *map)
{
    map->stack = new_list();
    map->cell_array = malloc(sizeof(stack_t *) * (my_strstrlen(map->map) + 1));
    map->cell_array[my_strstrlen(map->map)] = NULL;
    for (int i = 0; i < my_strstrlen(map->map); i++) {
        map->cell_array[i] = malloc(sizeof(stack_t) * (strlen(map->map[i]) + 1));
        map->cell_array[i][strlen(map->map[i])].t = END;
        for (int j = 0; map->cell_array[i][j].t != END; j++) {
            map->cell_array[i][j] = assign(map->map[i][j], j, i);
        }
    }
    map->cell_array[0][0].t = START;
    map->cell_array[0][0].glob = lenght(&map->cell_array[0][0],
    &map->cell_array[my_strstrlen(map->map) - 1][strlen(map->map[0]) - 1]);
    map->cell_array[0][0].loc = 0.0;
    map->cell_array[my_strstrlen(map->map) - 1][strlen(map->map[0]) - 1].t = FINISH;
}
