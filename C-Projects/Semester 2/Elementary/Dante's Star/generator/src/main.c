/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

char *init_line(int x, char ch)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (x + 1));
    for (; i < x; i++)
        str[i] = ch;
    str[i] = '\0';
    return (str);
}

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);

    t_lines *lines = malloc(sizeof(t_lines));
    lines->x = atoi(av[1]), lines->y = atoi(av[2]);
    srand(time(NULL));
    lines->str = backtracking(lines);


    free(lines);
    return (0);
}
