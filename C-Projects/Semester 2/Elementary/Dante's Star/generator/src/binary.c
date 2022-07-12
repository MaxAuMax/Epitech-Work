/*
** EPITECH PROJECT, 2021
** generator
** File description:
** binary.c
*/

#include "my.h"

void binary(t_lines *lines)
{
    for (int i = 0; i < lines->x; i++)
        write(1, "*", 1);
    write(1, "\n", 1);
    for (int idx = 0; idx < lines->y - 2; idx++) {
        for (int i = 0; i < lines->x; i++) {
            int rd = rand() % 2;
            if (rd == 0)
                write(1, "*", 1);
            if (rd == 1) {
                write(1, "X", 1);
                if (i < lines->x - 1)
                    write(1, "*", 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
    for (int i = 0; i < lines->x; i++)
        write(1, "*", 1);
}
