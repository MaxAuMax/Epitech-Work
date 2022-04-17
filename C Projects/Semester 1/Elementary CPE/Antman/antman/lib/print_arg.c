/*
** EPITECH PROJECT, 2021
** B-PSU-101-NCE-1-1-minishell1-maxime.mallet
** File description:
** print_arg.c
*/

#include "my.h"

void print_arg(char **array)
{
    while (*array) {
        my_putstr(*array);
        my_putchar('\n');
        array++;
    }
}
