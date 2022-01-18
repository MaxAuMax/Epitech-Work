/*
** EPITECH PROJECT, 2021
** paramsarray
** File description:
** ..
*/

#include "my.h"

struct info_param *my_params_to_array(int ac , char **av)
{
    for (int i = 0; i < ac; i++) {
        struct info_params av[i];
        av[i]->length = my_strlen(av[i]);
        av[i]->str = av[i];
        av[i]->copy = my_strdup(av[i]);
        av[i]->word_array = my_str_to_word_array(av[i]);
    }

    char **tab = malloc(sizeof(struct info_param) * (ac + 1));

    for (int y = 0; y < ac; y++) {
        tab[y] = av[y];
    }
    return (tab);
}
