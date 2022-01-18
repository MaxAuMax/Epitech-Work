/*
** EPITECH PROJECT, 2021
** mmaxime
** File description:
** my.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_

int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_str_to_int(char *str);
char *my_int_to_str(int nb);
char *my_revstr(char *str);

typedef struct st_window {
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    sfColor color;
} t_window;

typedef struct st_sprite {
    sfSprite *sp;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f scale;
} t_sprite;

typedef struct st_clock {
    sfClock *clock;
    sfTime time;
    float seconds;
} t_clock;

typedef struct st_text {
    sfText *text;
    sfFont *font;
    sfVector2f pos;
    char *str;
    int value;
    int len;
} t_text;

typedef struct st_global {
    t_window window;
    t_sprite moon;
    t_sprite spike;
    t_sprite demon;
    t_sprite tiles;
    t_sprite ghost;
    t_sprite menu_bg;
    t_sprite title;
    t_sprite play;
    t_sprite settings;
    t_sprite quit;
    t_sprite back;
    t_sprite select;
    t_sprite arrows;
    t_sprite resume;
    t_sprite **enemies;
    t_clock ghost_clock;
    t_clock jump_clock;
    t_clock para_clock;
    t_clock score_clock;
    t_text score;
    t_text score_num;
    t_text death;
    t_text victory;
    sfMusic *music;
    sfMusic *jump;
    int status;
    int len;
} t_global;

void usage(void);
void destroy_all(t_global *global);

//! Game create
void create_game(t_global *global);
void set_game(t_global *global);
void draw_game(t_global *global);
void texture_game(t_global *global);

//! End create
void create_end(t_global *global);
void draw_victory(t_global *global);
void draw_death(t_global *global);

//? All create
void set_sprite(t_sprite sprite);

//! Menu create
void create_menu(t_global *global);
void set_menu(t_global *global);
void draw_menu(t_global *global);
void texture_menu(t_global *global);

//! Settings create
void create_settings(t_global *global);
void set_settings(t_global *global);
void draw_settings(t_global *global);
void texture_settings(t_global *global);

//! Game
void my_runner(t_global *global, char *map);
void game(t_global *global);
void menu(t_global *global);
void settings(t_global *global);
void death(t_global *global);
void victory(t_global *global);
void events_game(t_global *global);
void events_menu(t_global *global);
void events_menu2(t_global *global, sfVector2i mouse);
void events_settings(t_global *global);
void events_end(t_global *global);
void click_play(t_global *global, int nb);
void click_quit(t_global *global, int nb);
void click_settings(t_global *global, int nb);
void click_select(t_global *global, int nb);
void launch_music(t_global *global);
void do_jump(t_global *global);
void end_jump(t_global *global);

//! General functions
void move_rect(t_sprite *sprite, int offset, int start, int max_value);
void move_sprite(t_sprite *sprite, sfSprite *s, int min);

void reset_clock_game(t_global *global);
void clock_game(t_global *global);

//! Create functions
void c_moon(t_sprite *moon);
void c_spike(t_sprite *spike);
void c_demon(t_sprite *demon);
void c_tiles(t_sprite *tiles);
void c_ghost(t_sprite *ghost);

void c_title(t_sprite *title);
void c_play(t_sprite *play);
void c_resume(t_sprite *resume);
void c_settings(t_sprite *settings);
void c_quit(t_sprite *quit);
void c_select(t_sprite *select);
void c_back(t_sprite *back);
void c_arrows(t_sprite *arrows);

void c_score(t_text *score);
void c_score_num(t_text *num);
void update_score(t_global *global);

void c_menu_bg(t_sprite *bg);

void c_victory(t_text *victory);
void c_death(t_text *death);

//! Parallax
void para_spike(t_global *global);
void para_demon(t_global *global);
void para_tiles(t_global *global);
void parallax(t_global *global);

//! Load enemies
void analyse_map(t_global *global, char *map);
void create_en1(t_global *global, int i, int count);
void check_collision(t_global *global);

#endif
