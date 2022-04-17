/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** my_ls.c
*/

#include "my.h"

int launch_flags(t_flags *flags)
{
    DIR *odir;
    DIR *oodir;
    odir = opendir(flags->dir);
    oodir = opendir(flags->dir);
    if (flags->l == 1) {
        ls_l(flags, odir, oodir);
        return (0);
    }
    basic_ls(odir);
    closedir(odir);
    return (0);
}

int main(int ac, char **av)
{
    t_flags *flags = malloc(sizeof(t_flags));
    DIR *odir;
    if (ac == 1) {
        odir = opendir(".");
        basic_ls(odir);
    } else {
        locate_dir(ac, av, flags);
        check_flags(ac, av, flags);
        launch_flags(flags);
    }
    closedir(odir);
    return (0);
}
