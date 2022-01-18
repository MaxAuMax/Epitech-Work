/*
** EPITECH PROJECT, 2021
** mmaxime
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

char my_putchar(char c);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char *src);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char *str);
char *my_int_to_str(int nb);
int my_str_to_int(char *str);
void *sub(char *str, int i);
void my_int_to_bin(int n);
void my_int_to_oct(int n);
void my_int_to_hex(int n);
void my_int_to_lower_hex(int n);
void my_printf(char *str, ...);
void disps(char str);
void flagb(va_list list);
void flagc(va_list list);
int flagi(va_list list);
void flago(va_list list);
void flagpo(va_list list);
void flags(va_list list);
void flagss(va_list list);
void flagu(va_list list);
void flagx(va_list list);
void flagxx(va_list list);
int flagp(va_list list);
int my_put_pointer(long nbr, char *base);
int check(char *str, int i, va_list list);

char *bsq(char *str);
char compare(char *str, int x, int len);
char *corners(char *str, int len);
int line_len(char *str);
char *replace(char *str, int len, int x, int lenn);

typedef struct s_point {
    int len;
    int x;
} t_point;

t_point check_first(char *str, t_point point);

#endif
