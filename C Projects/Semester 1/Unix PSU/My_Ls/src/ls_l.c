/*
** EPITECH PROJECT, 2021
** B-PSU-100-NCE-1-1-myls-maxime.mallet
** File description:
** ls_l.c
*/

#include "my.h"

char *file_path(char *dir, char *file)
{
    char *str = dir;
    int dlen = my_strlen(dir);
    int flen = my_strlen(file);

    if (str[my_strlen(str) - 1] == '/') {
        str = my_strcat(str, file);
        str[dlen + flen] = '\0';
    } else {
        str = my_strcat(str, "/");
        str = my_strcat(str, file);
        str[dlen + flen + 1] = '\0';
    }

    return (str);
}

void file_rights(struct stat fstat)
{
    my_printf((S_ISDIR(fstat.st_mode)) ? "d" : "-");
    my_printf((fstat.st_mode & S_IRUSR) ? "r" : "-");
    my_printf((fstat.st_mode & S_IWUSR) ? "w" : "-");
    my_printf((fstat.st_mode & S_IXUSR) ? "x" : "-");
    my_printf((fstat.st_mode & S_IRGRP) ? "r" : "-");
    my_printf((fstat.st_mode & S_IWGRP) ? "w" : "-");
    my_printf((fstat.st_mode & S_IXGRP) ? "x" : "-");
    my_printf((fstat.st_mode & S_IROTH) ? "r" : "-");
    my_printf((fstat.st_mode & S_IWOTH) ? "w" : "-");
    my_printf((fstat.st_mode & S_IXOTH) ? "x " : "- ");
}

void display_total(t_flags *flags, DIR *odir)
{
    struct dirent *rdir;
    struct stat fstat;
    int total = 0;

    while ((rdir = readdir(odir)) != NULL) {
        if (rdir->d_name[0] != '.') {
            char *str = file_path(flags->dir, rdir->d_name);
            stat(str, &fstat);
            total += fstat.st_blocks;
        }
    }
    my_printf("total %d\n", total / 2);
}

void ls_l(t_flags *flags, DIR *odir, DIR *oodir)
{
    struct dirent *rdir;
    struct passwd *usr;
    struct stat fstat;
    struct group *grp;
    display_total(flags, oodir);
    while ((rdir = readdir(odir)) != NULL) {
        if (rdir->d_name[0] != '.') {
            char *str = file_path(flags->dir, rdir->d_name);
            stat(str, &fstat);
            file_rights(fstat);
            usr = getpwuid(fstat.st_uid);
            grp = getgrgid(fstat.st_gid);
            my_printf("%d %s %s ", fstat.st_nlink, usr->pw_name, grp->gr_name);
            my_printf("%d ", fstat.st_size);
            write(1, (ctime(&fstat.st_mtime) + 4), 12);
            my_printf(" %s\n", rdir->d_name);
            free(str);
        }
    }
}
