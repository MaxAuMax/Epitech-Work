/*
** EPITECH PROJECT, 2021
** B-CPE-200-NCE-2-1-lemin-victor.delamonica
** File description:
** get_line.c
*/

#include "lemin.h"

void parth_file(void)
{
    int nb = 0;
    size_t stt = 0; char *str = NULL; int gl = 0;
    getline(&str, &stt, stdin);
    my_printf("#number_of_ants\n%s#rooms\n", str);
    while ((gl = getline(&str, &stt, stdin)) != -1) {
        char **line = my_str_to_word_array(str, ' ');
        nb++;
        if (my_strcmp(str, "##start") == 1) {
            start(str, stt, line);
        } else if (my_strcmp(str, "##end") == 1) {
            end(str, stt, line);
        } else
            case2(line, str);
    }
}
