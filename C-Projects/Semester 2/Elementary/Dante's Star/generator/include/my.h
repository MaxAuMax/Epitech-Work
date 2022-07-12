/*
** EPITECH PROJECT, 2022
** my h
** File description:
** include for lib
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#ifndef MY_H_
    #define MY_H_

void my_put_nbr(long long int nb);
void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
int my_strstrlen(char **str);
int my_strcmp(char *fst, char *snd);
void print_arg(char **array);

typedef struct st_elem {
    int x;
    int y;
    struct s_elem *next;
} t_elem;

typedef struct st_pile {
    struct st_elem *first;
} t_pile;

typedef struct st_lines {
    char *fst;
    char *snd;
    int x;
    int y;
    char **str;
} t_lines;

char **backtracking(t_lines *lines);

void empile(t_pile *pl, int x, int y);
void depile(t_pile *pl);

//! Old algo
char *init_line(int x, char ch);
void print_switch(t_lines *lines, int i);
void sidewinder(t_lines *lines);
void algo_side(t_lines *lines);
int drill(t_lines *lines, int oldx, int i);
void binary(t_lines *lines);

#endif /* MY_H_ */
