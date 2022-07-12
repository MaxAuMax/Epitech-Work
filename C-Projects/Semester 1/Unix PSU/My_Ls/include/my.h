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
#include <dirent.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
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

typedef struct st_flags {
    int l;
    char *dir;
} t_flags;

void basic_ls(DIR *odir);
void locate_dir(int ac, char **av, t_flags *flags);
void check_flags(int ac, char **av, t_flags *flags);
int launch_flags(t_flags *flags);
void ls_l(t_flags *flags, DIR *odir, DIR *oodir);

#endif /* MY_H_ */
