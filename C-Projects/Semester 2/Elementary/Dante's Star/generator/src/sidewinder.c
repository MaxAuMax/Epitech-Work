/*
** EPITECH PROJECT, 2021
** generator
** File description:
** dante.c
*/

#include "my.h"

void print_switch(t_lines *lines, int i)
{
    if (i != lines->y - 1)
        printf("%s\n", lines->fst);
    else
        printf("%s", lines->fst);
    for (int i = 0; lines->fst[i] != '\0'; i++) {
        lines->fst[i] = lines->snd[i];
        lines->snd[i] = '*';
    }
}

int drill(t_lines *lines, int oldx, int i)
{
    int rd = 0;
    lines->snd[i - 1] = 'X';
    if (i - 1 > 0)
        rd = rand() % ((i - 1) - oldx);
    lines->fst[rd] = '*';
    return (rd);
}

void algo_side(t_lines *lines)
{
    int oldx = 0;
    for (int i = 1; lines->snd[i] != '\0'; i++) {
        int rd = rand() % 2;
        if (rd == 0)
            oldx = drill(lines, oldx, i);
    }
}

void sidewinder(t_lines *lines)
{
    lines->fst = init_line(lines->x, '*');
    lines->snd = init_line(lines->x, 'X');
    for (int i = 0; i < lines->y; i++) {
        algo_side(lines);
        print_switch(lines, i);
    }
}
