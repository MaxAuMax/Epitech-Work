/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** read.c
*/

#include "my.h"

char **read_directory(char *path, char **tab)
{
    DIR *length = opendir(path); DIR *dir = opendir(path);
    if (length == NULL) exit(84);
    struct dirent *file;
    int i = 0, len = 0;
    while ((file = readdir(length)) != NULL) {
        char *cur = my_strdup(my_strcat(path, file->d_name));
        struct stat sb; stat(cur, &sb);
        if (!(S_ISDIR(sb.st_mode)))
            len++;
    }
    tab = malloc(sizeof(char *) * (len + 1));
    while ((file = readdir(dir)) != NULL) {
        char *cur = my_strdup(my_strcat(path, file->d_name));
        struct stat st; stat(cur, &st);
        if (!(S_ISDIR(st.st_mode))) {
            tab[i] = cur;
            i++;
        }
    }
    tab[i] = NULL;
    closedir(length);
    closedir(dir);
    return (tab);
}

t_blocks *make_stars(t_global *global, t_blocks *block, char *buf, char **tab)
{
    int num = 0, x = 0, y = 1, st = 0;
    int middle = (global->map_w / 2) + 3;
    for (int idx = 0; buf[idx] != '\0'; idx++)
        if (buf[idx] == '*')
            num++;
    t_stars **stars = malloc(sizeof(t_stars *) * num + 1);
    for (; tab[y] != NULL; y++) {
        for (x = 0; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == '*') {
                stars[st] = malloc(sizeof(t_stars));
                stars[st]->x = x + middle, stars[st]->y = y;
                st++;
            }
        }
    }
    stars[st] = NULL;
    block->stars = stars;
    return (block);
}

void store_tetrimino(t_global *global, char *buf, int i)
{
    char **tab = my_str_to_word_array_sep(buf, '\n');
    char **info = my_str_to_word_array_sep(tab[0], ' ');
    if (my_strstrlen(tab) < 2 || my_strstrlen(info) != 3) {
        free_array(tab);
        free_array(info);
        return;
    }
    t_blocks *block = malloc(sizeof(t_blocks));
    block->width = my_str_to_int(info[0]);
    block->height = my_str_to_int(info[1]);
    block->color = my_str_to_int(info[2]);
    global->blocks[i] = make_stars(global, block, buf, tab);
    free_array(info);
    free_array(tab);
}

void read_tetrimino(t_global *global, char **path)
{
    for (int i = 0; path[i] != NULL; i++) {
        struct stat st;
        stat(path[i], &st);
        int fd = open(path[i], O_RDONLY);
        char *buf = malloc(st.st_size + 1);
        read(fd, buf, st.st_size);
        buf[st.st_size] = '\0';
        store_tetrimino(global, buf, i);
        close(fd);
        free(buf);
    }
}
