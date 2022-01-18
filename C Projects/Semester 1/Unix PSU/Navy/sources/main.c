/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for navy
*/

#include "../includes/my.h"

int init(int ac, char **av, variable *var)
{
    var->pid = 0;
    var->pid2 = 0;
    var->win = -1;
    var->message = NULL;
    var->attack[0] = '\0';
    if (ac == 2) {
        if (read_map(av, var) != 0)
            return (84);
        if (load_boats(var->map, var->pos) != 0)
            return (84);
    } else {
        if (read_map2(av, var) != 0)
            return (84);
        if (load_boats(var->map2, var->pos) != 0)
            return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    variable *var = malloc(sizeof(variable));

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            help();
            return (0);
        }
    }
    if (ac == 2 || ac == 3) {
        if (init(ac, av, var) != 0)
            return (84);
        connection(ac, av, var);
        play(ac, var);
    } else {
        help();
        return (84);
    }
    return (var->win);
}
