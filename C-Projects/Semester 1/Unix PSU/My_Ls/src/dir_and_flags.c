/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** dir_and_flags.c
*/

#include "my.h"

void locate_dir(int ac, char **av, t_flags *flags)
{
    DIR *odir;
    int changed = 0;
    for (int i = 1; i < ac; i++) {
        if ((odir = opendir(av[i])) != NULL) {
            flags->dir = av[i];
            changed = 1;
            break;
        }
    }
    if (changed == 0) {
        flags->dir = ".";
    }
    closedir(odir);
}

void check_flags(int ac, char **av, t_flags *flags)
{
    for (int i = 1; i < ac; i++) {
        if (my_strcmp(av[i], "-l") == 0) {
            flags->l = 1;
            break;
        }
    }
}
