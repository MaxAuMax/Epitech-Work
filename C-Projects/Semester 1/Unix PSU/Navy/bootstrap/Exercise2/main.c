/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for kill_it
*/

#include "../../includes/my.h"

int main(int ac, char **av)
{
    kill(my_getnbr(av[ac - 1]), SIGQUIT);

    return (0);
}
