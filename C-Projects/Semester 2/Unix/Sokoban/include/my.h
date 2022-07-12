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

#ifndef MY_H_
    #define MY_H_

char *my_int_to_str(int nbr);
void my_put_nbr(long long int nb);
void my_putchar(char c);
void my_putstr(char *str);
char *my_revstr(char *str);
int my_str_to_int(char *str);
int my_strlen(char *str);
int my_strstrlen(char **str);
int my_strcmp(char *fst, char *snd);
int my_strncmp(char *fst, char *snd, int n);
char *my_strncat(char *dest, char const *src, int n);
char *my_strcat(char *dest, char *src);

void print_arg(char **array);

char **my_str_to_word_array(char *str);
int word_len(char *str, int i);
int count(char *str);
int is_charac(char c, int status);

char **my_str_to_word_array_sep(char *str, char sep);
int count_sep(char *str, char sep);
int is_charac_sep(char c, char sep);
char *my_strncpy(char *dest, char *src, int n);

void disp_stdarg(char s, va_list list);
void disp2(char s, va_list list);
void disp3(char s, va_list list);
void disp4(char s, va_list list);
void disp5(char s, va_list list);
void disps(char str);
void my_printf(char *str, ...);
void my_int_to_bin(int n);
void my_int_to_hex(int n);
void my_int_to_oct(int n);

typedef struct st_player {
    int posx;
    int posy;
    int st_x;
    int st_y;
    char *cha;
} PLAYER;

typedef struct st_crosses {
    int posx;
    int posy;
    int st_x;
    int st_y;
    char *cha;
} t_crosses;

typedef struct st_places {
    int posx;
    int posy;
    int max;
} places;

typedef struct st_infos {
    char *map;
    int stx;
    int sty;
    int width;
    int height;
    int get;
} infos;

typedef struct st_global {
    WINDOW *window;
    PLAYER *player;
    t_crosses **all_crosses;
    infos *info;
    places **all_place;
} GLOBAL;

char check_char(infos *info, char x, char y);
void move_up(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses);
void move_down(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses);
void move_left(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses);
void move_right(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses);

int check_cross(t_crosses **all_crosses, int x, int y);
void move_up_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross);
void move_down_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross);
void move_left_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross);
void move_right_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross);

void events(GLOBAL *global);
void rest(GLOBAL *global);
void my_sokoban(GLOBAL *global);
char *read_map(char *av, infos *info);
int getwidth(char *map);
int getheight(char *map);

void init_all(GLOBAL *global, char **av);
void init_player(PLAYER *player, char *ch, infos *info);
void init_player(PLAYER *player, char *ch, infos *info);
void init_info(infos *info, char *av);
t_crosses **init_cross(infos *info);
void set_all_crosses(t_crosses **all_crosses, infos *info);
places **init_place(infos *info);
void set_all_places(places **all_places, infos *info, int count);
void restart(GLOBAL *global);

void usage(void);
void check_win(GLOBAL *global);
void free_all(infos *info, t_crosses **all_crosses, PLAYER *player);
void shutdown(infos *info);

#endif /* MY_H_ */
