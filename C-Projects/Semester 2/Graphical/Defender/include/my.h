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
#include <stdbool.h>
#include <stddef.h>

#ifndef MY_H_
    #define MY_H_

int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_str_to_int(char *str);
char *my_int_to_str(int nb);
char *my_revstr(char *str);
int my_strcmp(char *fst, char *snd);

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
} t_text;

typedef struct st_more {
    sfSprite *sp;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f scale;
    int cur_px;
    int cur_tile;
    char *old_way;
} t_more;

typedef struct st_turret {
    sfSprite *sp;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f scale;
    int cost;
} t_turret;

typedef struct st_global {
    t_window window;
    t_sprite cross;
    t_sprite playb;
    t_sprite bcg;
    t_sprite settingb;
    t_sprite quitb;
    t_sprite music_onb;
    t_sprite titleb;
    t_sprite sound_onb;
    t_sprite bcg_set;
    t_sprite fps30;
    t_sprite fps60;
    t_sprite fps120;
    t_sprite returnb;
    t_sprite aboutb;
    t_sprite aboutbcg;
    t_sprite gshop;
    t_sprite shopb;
    t_sprite spawnb;
    t_sprite bcg_pause;
    t_sprite homeb;
    t_sprite resumeb;
    t_sprite quitb2;
    t_sprite goldc;
    t_clock enemy_clock;
    t_more **all_tiles;
    t_more **all_enemies;
    t_turret **all_turret;
    int plc;
    t_text gold;
    sfTexture *grass;
    sfTexture *dirt;
    sfTexture *turret;
    sfTexture *en_red;
    sfTexture *t_ten;
    sfTexture *t_twen;
    sfTexture *t_four;
    sfTexture *t_eight;
    sfVector2i mouse;
    sfMusic *music;
    char map[128];
    int status;
    bool spawn;
} t_global;

//! Others
void usage(void);
void read_maps(t_global *global, char *str);
int destroy_it(t_global *global);
void all_sprite(t_global *global);
void d_sprite(t_sprite sprite);
void d_texture(t_global *global);
void d_dbl_more(t_more **all);

//! Moves
void move_rect(t_sprite *sprite, int offset, int start, int max_value);
void move_sprite(t_sprite *sprite, sfSprite *s, int min);
void move_enemy(t_more *more, int x, int y, int rd);
void path_finding(t_more *more, char *map);
void find_path(t_more *more, char *map, int rd);
void find_path_again(t_more *more, char *map, int rd);

//! General functions
void my_defender(t_global *global);
void launch(t_global *global);

//! Tiles
void create_tiles(t_global *global, char *map);
void set_tiles_struct(t_global *global, char *map, int tls);
void set_tliles_options(t_global*global, char *map, int i, int y);
void set_turret_spot(t_global *global, char *map, int i, int y);

//! Game
void game(t_global *global);
void events_game(t_global *global);
void create_enemies(t_global *global);
void set_enemies_struct(t_global *global);
void draw_game(t_global *global);
void texture_game(t_global *global);
int look_start(char *map);
void create_set_cursor(t_sprite *cross);
void spawnb(t_sprite *sprite);
//? Game : Menu
void create_gshop(t_global *global);
void gshop(t_sprite *sprite);
void set_gshop(t_global *global);
void shopb(t_sprite *sprite);
void click_shopb(t_global *global);
//? Game : Turret
void create_turret(t_global *global);
void check_turret(t_global *global, sfVector2i mouse);
void create_gold(t_text *gold);
void gold_icon(t_sprite *sprite);

//! Menu
void set_sprite(t_sprite sprite);
void set_menu(t_global *global);
void create_menu(t_global *global);
void menu(t_global *global);
void draw_menu(t_global *global);
void texture_menu(t_global *global);
void events_menu(t_global *global);
void events_menu2(t_global *global, sfVector2i mouse);
void events_menu3(t_global *global, sfVector2i mouse);
void title_menu_rect(t_sprite * sprite);
void click_settingb(t_global *global, int nb);
void click_aboutb(t_global *global, int nb);
void click_playb(t_global *global, int nb);
void background_menu(t_sprite * sprite);
//? Menu : Play
void playb(t_sprite *playb);
//? Menu : Settings
void menu_settings(t_global *global);
void set_setting(t_global *global);
void create_setting(t_global *global);
void draw_settings(t_global *global);
void texture_settings(t_global *global);
void music_onb(t_sprite *sprite);
void events_setting(t_global *global);
void events_setting2(t_global *global, sfVector2i mouse);
void click_music_on(t_global *global, int nb);
void background_setting(t_sprite * sprite);
void sound_onb(t_sprite *sprite);
void click_sound_on(t_global *global, int nb);
void fps60(t_sprite * sprite);
void fps120(t_sprite * sprite);
void fps30(t_sprite * sprite);
void events_setting3(t_global *global, sfVector2i mouse);
void events_setting4(t_global *global, sfVector2i mouse);
void click_fps30(t_global *global, int nb);
void click_fps120(t_global *global, int nb);
void click_fps60(t_global *global, int nb);
void returnb(t_sprite * sprite);
void settingb(t_sprite *sprite);
void click_returnb(t_global *global, int nb);
//? Menu : About
void aboutb(t_sprite *sprite);
void set_about(t_global *global);
void background_aboutb(t_sprite *sprite);
void events_about(t_global *global);
void create_about(t_global *global);
void texture_about(t_global *global);
void draw_about(t_global *global);
void menu_about(t_global *global);
//? Menu : Quit
void click_quitb(t_global *global, int nb);
void quitb(t_sprite *sprite);
void quitb2(t_sprite *sprite);
//? Menu Pause
void set_pause(t_global *global);
void create_pause(t_global *global);
void texture_pause(t_global *global);
void draw_pause(t_global *global);
void menu_pause(t_global *global);
void events_pause(t_global *global);
void events_pause2(t_global *global, sfVector2i mouse);
void background_pause(t_sprite *sprite);
void homeb(t_sprite *sprite);
void resumeb(t_sprite *sprite);
void click_resumeb(t_global *global, int nb);
void click_quitb2(t_global *global, int nb);
void click_homeb(t_global *global, int nb);

#endif
