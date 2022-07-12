/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-victor.delamonica
** File description:
** lemin.h
*/

#ifndef _MY_H_
    #define _MY_H_

#ifndef _INCLUDE_
    #define _INCLUDE_
    #include <ncurses.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <time.h>
    #include <string.h>
    #include <stdio.h>

#endif/* _INCLUDE_ */

#ifndef _SRC_
    #define _SRC_

    void my_putchar(char c);
    void my_putstr(char *str);
    void my_put_nbr(int nb);
    void my_printf(char *str, ...);
    int my_atoi(char *str);
    char *my_itoa(int nb);
    char **my_str_to_word_array(char *str, char sep);
    int my_arrlen(char **array);
    void free_array(char **table);
    int my_strlen(char const *str);
    void my_revstr(char *str);
    void free_array(char **table);
    char *my_strdup(char *str);
    int my_strcmp(char const *s1 , char const *s2);
    char *my_strcat(char *s1, char *s2);

#endif/* _SRC_ */

#ifndef _STRUCTS_
    #define _STRUCTS_

    typedef struct s_rooms {
        char *num;
        char **links;
        bool start;
        bool end;
        bool empty;
    } t_rooms;

    typedef struct s_path {
        char *num;
        struct s_path *next;
    } t_path;

    typedef struct s_global {
        int ants;
        int nb_r;
        t_rooms **rooms;
        t_path *path;
    } global_t;

#endif/* _STRUCTS_ */

#ifndef _LEMIN_
    #define _LEMIN_

    void start(char *str, size_t stt, char **line);
    void end(char *str, size_t stt, char **line);
    void parth_file(void);
    void case2(char **line, char *str);
    void case3(int gl, char **line , char *str, size_t stt);

#endif/* _LEMIN_ */

#endif/* _MY_H_ */
