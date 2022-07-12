/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** basic_ls.c
*/

#include "my.h"

void basic_ls(DIR *odir)
{
    struct dirent *rdir;
    while ((rdir = readdir(odir)) != NULL) {
        if (rdir->d_name[0] == '.')
            continue;
        write(1, rdir->d_name, my_strlen(rdir->d_name));
        write(1, " ", 1);
    }
    write(1, "\n", 1);
}
