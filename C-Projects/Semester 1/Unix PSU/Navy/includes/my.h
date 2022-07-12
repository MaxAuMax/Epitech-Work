/*
** EPITECH PROJECT, 2021
** MY_H
** File description:
** Include for my lib
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <signal.h>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(long long int nb);
void my_unsigned_put_nbr(unsigned int nb);
void my_sort_int_array(int *array, int size);
void my_show_int_array(int *array);

int my_compute_factorial_rec(int nb);
int my_compute_power_rec(int nb, int p);
int my_find_prime_sup(long long int nb);
int my_getnbr(char const *str);
int my_is_prime(long long int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);

char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

#endif /* THEBESTLIB */

#ifndef CONVERT_H_
    #define CONVERT_H_

char *my_convert_base(unsigned int nb, int base);

int my_char_to_int(char c);
char my_int_to_char(int n);

char *my_int_to_str(int nbr);
int my_str_to_int(char *str);

int my_float_to_int(float nbr); /* A FAIRE */
float my_int_to_float(int nbr); /* A FAIRE */

float my_str_to_float(char *str); /* A FAIRE */
char *my_float_to_str(float nbr); /* A FAIRE */

#endif /* THEBESTLIB */

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

void my_printf(char *str, ...);

void my_putstr_upcase_s(char const *str);

void my_printf_flag_b(va_list list);
void my_printf_flag_c(va_list list);
void my_printf_flag_d(va_list list);
void my_printf_flag_i(va_list list);
void my_printf_flag_o(va_list list);
void my_printf_flag_p(va_list list);
void my_printf_flag_u(va_list list);
void my_printf_flag_s(va_list list);
void my_printf_flag_s_up(va_list list);
void my_printf_flag_x_low(va_list list);
void my_printf_flag_x(va_list list);
void my_printf_flag_percent(va_list list);

#endif /* THEBESTLIB */

#ifndef NAVY_H_
    #define NAVY_H_

typedef struct st_variable {
    int pid;
    int pid2;
    char map[180];
    char map2[180];
    char pos[32];
    int win;
    char attack[1024];
    char *message;
} variable;

typedef struct glb {
    int global;
} glb;

void help(void);

void handler(int sig, siginfo_t *info, void *ucontext);
void connect_p1(void);
void connect_p2(char **av, variable *var);
int connection(int ac, char **av, variable *var);

int read_map(char **av, variable *var);
int read_map2(char **av, variable *var);
int add_boats(char *map, char *pos, int i);
int load_boats(char *map, char *pos);

int play(int ac, variable *var);
void play_p1(variable *var);
void play_p2(variable *var);
int who_won(variable *var);

int check_hit(variable *var, char *map, char *map_en, int pid);
int check_pos(char *attack);
void send_attack(variable *var, int pid);

int receive_attack(variable *var);
void up_by_one(int sig);
void stop_it(int sig);

void receive_hit(variable *var, char *map_en);
void missed(int sig);
void hit(int sig);

void check_boats(variable *var, char *map, int pid);
void change_maps(char *map, int message, char *attack);

#endif

#ifndef TESTS
    #define TESTS

void redirect_all_std(void);

#endif /* THEBESTLIB */

#define INT_MAX 2147483647
#define INT_MIN -2147483648

#define UINT_MAX 4294967295
#define UINT_MIN 0

#define LLONG_MAX 9223372036854775807
#define LLONG_MIN -9223372036854775808

#define ULLONG_MAX 18446744073709551615
#define ULLONG_MIN 0

#define SHORT_MAX 32767
#define SHORT_MIN -32767

#define USHORT_MAX 65535
#define USHORT_MIN 0

#define EXIT_HELP   0
#define EXIT_ERROR  84
