/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** my_ls.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include "include/my.h"

int isDirectory(char *way)
{
   struct stat statbuf;

   if (stat(way, &statbuf) != 0)
       return (0);
   return (S_ISDIR(statbuf.st_mode));
}

int my_ls(char *way, char *flag)
{
    DIR *dir;
    struct dirent *ent;
    dir = opendir(way);

    if (dir == NULL)
        return (84);
    while ((ent = readdir(dir)) != NULL) {
        my_printf("%s ", ent->d_type);
    }
    closedir(dir);
    return (0);
}
