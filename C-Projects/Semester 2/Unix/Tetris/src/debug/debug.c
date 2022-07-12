/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-tetris-allan.charlier
** File description:
** debug.c
*/

#include "my.h"

void print_key_quit(t_global *global)
{
    my_putstr("Key quit: ");
    if (global->key_quit == 260)
        my_putstr("KEY_LEFT (260)\n");
    if (global->key_quit == 261)
        my_putstr("KEY_RIGHT (261)\n");
    if (global->key_quit == 259)
        my_putstr("KEY_TOP (259)\n");
    if (global->key_quit == 258)
        my_putstr("KEY_DOWN (258)\n");
    if (global->key_quit != 260 && global->key_quit != 261 &&
    global->key_quit != 259 && global->key_quit != 258)
        my_printf("%c (%d)\n",global->key_quit, global->key_quit);
}

void print_it(char **tab, char **info, char **name, char **names)
{
    my_printf("Tetriminos '%s': size %s*%s, color %s\n",
    names[0], info[0], info[1], info[2]);
    int i = 1;
    for (; tab[i + 1] != NULL; i++) {
        int len = my_strlen(tab[i]);
        if (tab[i][len - 1] == ' ')
            tab[i][len - 1] = '\0';
        my_printf("%s\n", tab[i]);
    }
    my_printf("%s", tab[i]);
}

int is_printable(char **tab, char **info, char **name, char **names)
{
    if (my_strstrlen(tab) >= 2 && my_strstrlen(info) == 3
    && my_strlen(info[2]) > 0 && info[0][0] != '-' && info[1][0] != '-');
    else
        return (-1);
    for (int i = 0; tab[0][i] != '\0'; i++) {
        if (tab[0][i] != ' ' && (tab[0][i] < '0' || tab[0][i] > '9'))
            return (-1);
    }
    int len = my_strstrlen(names);
    int nlen = my_strlen(names[0]);
    if (nlen == 0 || len <= 1 || my_strcmp("tetrimino", names[len - 1]) == -1)
        return (-1);
    return (0);
}

void major_print(t_global *global, char **path, int i)
{
    struct stat st; stat(path[i], &st);
    int fd = open(path[i], O_RDONLY);
    char *buf = malloc(st.st_size + 1);
    read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    char **tab = my_str_to_word_array_sep(buf, '\n');
    char **info = my_str_to_word_array_sep(tab[0], ' ');
    char **name = my_str_to_word_array_sep(path[i],  '/');
    char **names = my_str_to_word_array_sep(name[2], '.');
    if (is_printable(tab, info, name, names) == 0)
        print_it(tab, info, name, names);
    else {
        my_printf("Tetriminos '%s': error\n", names[0]);
        // global->err = true;
    }
    free_array(name); free_array(names); free(buf); free_array(tab);
    free_array(info); close(fd);
}

int debug(t_global *global)
{
    print_key_left(global); print_key_right(global);
    print_key_turn(global); print_key_drop(global);
    print_key_quit(global); print_key_pause(global);
    my_putstr("Next: ");
    if (!global->show_next)
        my_putstr("Yes\n");
    else
        my_putstr("No\n");
    my_printf("Level: %d\nSize: %d*%d\n\n", global->level,
    global->map_h, global->map_w);
    char **path = read_directory("./tetriminos/", path);
    my_printf("Number of tetriminos: %d\n", my_strstrlen(path));
    if (my_strstrlen(path) == 0) exit(84);
    for (int i = 0; path[i] != NULL; i++)
        major_print(global, path, i);
    free_array(path);
    // if (global->err)
    //     exit(84);
}
