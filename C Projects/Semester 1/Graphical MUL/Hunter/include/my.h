/*
** EPITECH PROJECT, 2021
** mmaxime
** File description:
** my.h
*/

#include <stdarg.h>
#include <SFML/Graphics.h>

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
char *my_int_to_str(int nb);
int my_str_to_int(char *str);
void *sub(char *str, int i);
void my_int_to_bin(int n);
void my_int_to_oct(int n);
void my_int_to_hex(int n);
void my_printf(char *str, ...);
void disp_stdarg(char s, va_list list);
void disp2(char s, va_list list);
void disp3(char s, va_list list);
void disp4(char s, va_list list);
void disp5(char s, va_list list);
void disps(char str);

typedef struct st_window {
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    int hit;
    int bul;
    int level;
    sfColor color;
} t_window;

typedef struct st_sprite {
    sfSprite *sp;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f scale;
    sfVector2i mouse;
} t_sprite;

typedef struct st_clock {
    sfClock *clock;
    sfTime time;
    float seconds;
} t_clock;

typedef struct st_global {
    t_window window;
    t_sprite bg;
    t_sprite duck1;
    t_sprite shot;
    t_sprite shotr;
    t_sprite hit;
    t_sprite hitr;
    t_sprite dog;
    t_sprite cross;
    t_sprite round;
    t_sprite score;
    t_clock duck_clock;
    t_clock dog_clock;
} t_global;

void launch(t_global *global);
void move_sprite(t_sprite *sprite, sfSprite *s, int max, int xx);
void events(t_global *global);
void usage(void);
void move_rect(t_sprite *sprite, int offset, int start, int max_value);
void c_cross(t_sprite *cross);
void c_duck1(t_sprite *duck1);
void c_bg(t_sprite *bg);
void c_shot(t_sprite *shot);
void c_shotr(t_sprite *shotr);
void c_dog(t_sprite *dog);
void c_hit(t_sprite *hit);
void c_round(t_sprite *round);
void c_score(t_sprite *score);
void c_hitr(t_sprite *hitr);
void set_sprite(t_sprite *sprite, t_sprite *bg);
void texture(t_global *global);
void draw(t_global *global);
void wind(t_global *global);
void clock(t_global *global);
void reset_clock(t_global *global);
void create(t_global *global);
void set(t_global *global);
void randco(t_sprite *sprite);
void check_hit(t_global *global);
void check_bul(t_global *global);
int another(int ac, char **av);
int again(int ac, char **av);

#endif
