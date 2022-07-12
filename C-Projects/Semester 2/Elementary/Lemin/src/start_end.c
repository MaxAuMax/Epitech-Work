/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** start_end.c
*/

#include "lemin.h"

void start(char *str, size_t stt, char **line)
{
    free_array(line);
    getline(&str, &stt, stdin);
    char **line_next = my_str_to_word_array(str, ' ');
    my_printf("##start\n%s %s %s", line_next[0], line_next[1],
    line_next[2]);
    free_array(line_next);
}

void end(char *str, size_t stt, char **line)
{
    free_array(line);
    getline(&str, &stt, stdin);
    char **line_next = my_str_to_word_array(str, ' ');
    if (my_arrlen(line_next) > 3)
        my_printf("##end\n%s %s %s\n", line_next[0], line_next[1],
        line_next[2]);
    else if (my_arrlen(line_next) == 3)
        my_printf("##end\n%s %s %s", line_next[0], line_next[1],
        line_next[2]);
    free_array(line_next);
}
