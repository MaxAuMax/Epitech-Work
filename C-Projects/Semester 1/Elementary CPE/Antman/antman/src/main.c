/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-antman-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    struct stat stats;
    stat(av[1], &stats);
    char *str = malloc(stats.st_size + 1);

    int fd = open(av[1], O_RDONLY);
    read(fd, str, stats.st_size);
    str[stats.st_size] = '\0';

    char **arr = my_str_to_word_array(str);
    find_diff(arr);
    return (0);
}
