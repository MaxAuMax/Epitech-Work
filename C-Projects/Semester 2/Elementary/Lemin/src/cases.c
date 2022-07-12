/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** cases.c
*/

#include "lemin.h"

void case3(int gl, char **line , char *str, size_t stt)
{
    free_array(line);
    while ((gl = getline(&str, &stt, stdin)) != -1) {
        char **line_next  = my_str_to_word_array(str, '-');
        if (line_next[0][0] != '#' && line_next[0][0] != '\n'
        && my_arrlen(line_next) == 2 &&
        line_next[1][0] != '\n')
            my_printf("%s", str);
        free_array(line_next);
    }
    free(str);
}

void case2(char **line, char *str)
{
    size_t st = 0;
    int gl = 0;
    if (line[0][0] != '#' && my_arrlen(line) >= 3) {
        my_printf("%s %s %s", line[0], line[1], line[2]);
        free_array(line);
    } else if (line[0][0] != '#' && my_arrlen(line) == 1){
        my_printf("#tunnels\n%s", str);
        case3(gl, line, str, st);
        free(str);
        my_printf("#moves\n");
    } else
        free_array(line);
}
