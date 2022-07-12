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
#include <ncurses.h>
#include <getopt.h>
#include <time.h>
#include <dirent.h>

#ifndef MY_H_
    #define MY_H_

void my_put_nbr(long long int nb);
void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
int my_strstrlen(char **str);
int my_strcmp(char *fst, char *snd);
int my_str_to_int(char *str);
char **my_str_to_word_array(char *src);
int words(char *str);
char **my_str_to_word_array_sep(char *src, char sep);
int words_sep(char *str, char sep);
void free_array(char **tab);
void print_arg(char **array);
char *my_strcat(char *str, char *str2);
char *my_strdup(char *str);
char *my_int_to_str(int nb);
char *my_revstr(char *str);

typedef struct st_stars {
    int x;
    int y;
} t_stars;

typedef struct st_blocks {
    int color;
    int width;
    int height;
    t_stars **stars;
} t_blocks;

typedef struct st_game {
    WINDOW *window;
    int stx;
    int sty;
} t_game;

typedef struct st_next {
    WINDOW *window;
    int width;
    int height;
} t_next;

typedef struct st_score {
    WINDOW *window;
    int width;
    int height;
    int score;
} t_score;

typedef struct st_global {
    char **av;
    t_game *game;
    t_score *score;
    t_next *next;
    t_blocks **blocks;
    clock_t clock;
    int level;
    int key_left;
    int key_right;
    int key_turn;
    int key_drop;
    int key_quit;
    int key_pause;
    int map_h;
    int map_w;
    bool show_next;
    bool debug;
    bool err;
    char **map;
} t_global;

void usage(char **av);

//! Flags
void init_flags(t_global *global, int ac, char **av);
void get_flags(t_global *global, int ac, char **av);
int get_other(t_global *global, int fl);
void get_last(t_global *global, int fl);
void get_lasts(t_global *global, int fl);
void change_map(t_global *global, char *str);

//! Tetriminos
char **read_directory(char *path, char **tab);
void store_tetrimino(t_global *global, char *buf, int i);
void read_tetrimino(t_global *global, char **path);
t_blocks *make_stars(t_global *global, t_blocks *block, char *buf, char **tab);
void move_right(t_global *global);
void move_left(t_global *global);

//! Tetris mode
void init(t_global *global, int ac, char **av);
void init_game(t_global *global);
void init_score(t_global *global);
void init_next(t_global *global);
void init_blocks(t_global *global);
char **init_fallen(t_global *global);
void game(t_global *global);
void game_win(t_global *global);
void next_win(t_global *global);
void score_win(t_global *global);
int increase_score(t_global *global, int elapsed, int sec);
int second_passed(t_global *global, int elapsed, int sec);

//! Debug mode
int debug(t_global *global);
void major_print(t_global *global, char **path, int i);
void print_key_quit(t_global *global);
void print_key_drop(t_global *global);
void print_key_turn(t_global *global);
void print_key_right(t_global *global);
void print_key_left(t_global *global);
void print_key_pause(t_global *global);
void my_printf(char *str, ...);
void move_drop(t_global *global);

#endif /* MY_H_ */
