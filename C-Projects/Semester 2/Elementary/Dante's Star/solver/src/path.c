/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-dante-allan.charlier
** File description:
** path.c
*/



#include "my.h"

void check_neighb(map_t *map, stack_t *current, list_node not_visit)
{
    for (list_node nbr = current->nbr; nbr != NULL; nbr = nbr->next) {
        if (!nbr->cell->visited && nbr->cell->t == FREE)
            not_visit = add_back(not_visit, nbr->cell);
        float lower = current->loc + lenght(current, nbr->cell);
        if (lower < nbr->cell->loc) {
            nbr->cell->parent = current;
            nbr->cell->loc = lower;
            nbr->cell->glob = nbr->cell->loc + lenght(nbr->cell,
            &map->cell_array[my_strstrlen(map->map) - 1][strlen(map->map[0]) - 1]);
        }
    }
}

void solver(map_t *map)
{
    stack_t *current = &map->cell_array[0][0];
    list_node not_visit = new_list();
    not_visit = add_back(not_visit, current);
    while (!empty(not_visit)) {
        sort_list_node(not_visit);
        while (!empty(not_visit) && not_visit->cell->visited == true) {
            not_visit = remove_front(not_visit);
        }
        if (empty(not_visit)) {
            break;
        }
        current = not_visit->cell;
        current->visited = true;
        check_neighb(map, current, not_visit);
    }
}
