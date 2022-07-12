/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** rpg.h
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
#include <string.h>

#ifndef _RPG_
    #define _RPG_

    int my_strlen(char const *str);
    int my_putstr(char const *str);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_str_to_int(char *str);
    char *my_int_to_str(int nb);
    char *my_revstr(char *str);
    int my_strcmp(char *fst, char *snd);
    char **my_str_to_word_array(char *src);
    char *my_atoi(int nb);

#ifndef _SRC_
    #define _SRC_

    typedef struct st_window {
        sfRenderWindow *w;
        sfVideoMode video;
        sfEvent evt;
        sfColor color;
    } t_window;

    typedef struct st_sprite {
        sfSprite *sp;
        sfTexture *txtr;
        sfIntRect rect;
        sfVector2f pos;
        sfVector2f scale;
    } t_sprite;

    typedef struct st_clock {
        sfClock *clock;
        sfTime time;
        float sec;
    } t_clock;

    typedef struct st_text {
        sfText *text;
        sfFont *font;
        sfVector2f pos;
        char *str;
        int value;
    } t_text;

    typedef struct s_fx {
        t_sprite *fade_dark;
        t_sprite *snow;
        sfClock *snow_clk;
    } t_fx;

    typedef struct s_pnj {
        t_sprite *sp;
        int x;
        int y;
        char *str;
    } t_pnj;

    typedef struct s_enemi {
        t_sprite *sp;
        int x;
        int y;
        int hp;
        int atk;
        char *str;
    } t_enemi;

    typedef struct s_char_stat {
        int atk;
        int hp;
        int hp_max;
        int dodge;
        int def;
    } t_char_stat;

    typedef struct s_perso {
        int x;
        int y;
        int atk;
        int hp;
        int hp_max;
        int dodge;
        int def;
        int gold;
        t_sprite *weapon;
        t_sprite *helmet;
        t_sprite *shield;
        t_sprite *armor;
        t_sprite *inv;
        t_sprite *i_sel;
        t_sprite *inv_stat_w;
        t_sprite *shov;
        t_sprite *stick;
        sfClock *clk;
        sfClock *walk;
        t_sprite *player;
        sfTexture *w;
        t_char_stat *war_s;
        sfTexture *l;
        t_char_stat *lumb_s;
        sfTexture *m;
        t_char_stat *mage_s;
    } t_perso;

    typedef struct pos_s {
        int x;
        int y;
    } pos_t;

    typedef struct s_fight {
        t_sprite *bg;
        t_sprite *ui_att;
        t_sprite *att;
        t_sprite *pl;
        t_text *php;
        t_text *patk;
        t_text *pdodge;
        t_text *pdef;
        t_text *ehp;
        t_clock *en_clk;
        bool update;
        int en_hp;
        int en_atk;
        int atk;
        int dodge;
        int def;
    } t_fight;

    typedef struct s_music {
        sfMusic *musictuto;
        sfMusic *m_plaine;
        sfMusic *musicaut;
        sfMusic *musictav;
        sfMusic *m_win;
    } t_music;

    typedef struct st_global {
        t_window *window;
        t_perso *player;
        t_sprite *intro;
        t_sprite *fps30;
        t_sprite *fps60;
        t_sprite *fps120;
        t_sprite *returnb;
        t_sprite *music_onb;
        t_sprite *sound_onb;
        t_sprite *tuto_map;
        t_sprite *map;
        t_sprite *aut_map;
        t_sprite *win_map;
        t_sprite *bkg;
        t_sprite *htp;
        t_sprite *play;
        t_sprite *quit;
        t_sprite *setings;
        t_sprite *next;
        t_sprite *previous;
        t_sprite *homeb;
        t_sprite *resumeb;
        t_sprite *quitpause;
        t_sprite *chatbox;
        t_sprite *bkghtp;
        t_sprite *bkgset;
        t_sprite *house_inside;
        t_sprite *chest;
        t_sprite *lose;
        t_sprite *win;
        t_enemi *skl;
        t_enemi *org;
        t_enemi *pumpking;
        t_enemi *tree;
        t_enemi *pb;
        t_enemi *snowman;
        t_enemi *santa;
        t_music *music;
        sfImage *tuto_map_bw;
        sfImage *map_bw;
        sfImage *aut_map_bw;
        sfImage *win_map_bw;
        sfImage *house_inside_bw;
        sfImage *cur_map_bw;
        t_pnj *marcel;
        t_pnj *conor;
        t_pnj *gege;
        t_fight *fgt;
        t_fx *fx;
        t_text *name;
        t_text *chatbox1;
        pos_t **inv_arr_pos;
        sfClock *c_intro;
        sfClock *word_clk;
        sfClock *pnj_clk;
        sfClock *en_clk;
        sfSprite *cur_map;
        char **inv_arr;
        char *inv_bar;
        char *chat;
        char *nm;
        int scene;
        int selct;
        int click;
        int next_scene;
        int enter_x;
        int enter_y;
        int int_map;
        int skin;
        int nbclikc;
        int g_stkx;
        int g_stky;
        int cur_pnj;
        int cur_en;
        bool inside;
        bool show_inv;
        bool grab;
        bool unequip;
        bool fb1;
        bool fb2;
        bool fcross;
        bool fsnman;
        bool fpunk;
        bool fgryrd;
        bool talk;
        bool dsp;
        bool talk_marcel;
        bool talk_conor;
        bool talk_gege;
        bool shov;
        bool stick;
        bool atk_turn;
        bool order;
        bool arm1;
        bool arm2;
        bool arm3;
    } t_global;

    void move_rect(sfIntRect *rect, int offset, int max_value);
    void move_sprite(sfSprite *sprite, int x, int y);

    void my_rpg(t_global *glb);
    void free_all(t_global *glb);
    void free_tperso(t_global *glb);
    void free_ttext(t_text *text);
    void free_tsprite(t_sprite *sprite);
    void free_enemi(t_enemi *enemi);
    void free_pnj(t_pnj *pnj);

#endif /* _SRC_ */

#ifndef _HUGO_
    #define _HUGO_
    //!button
    void button_settings(sfVector2i pos_mouse, t_global *glb);
    void button_quit(sfVector2i pos_mouse, t_global *glb);
    void button_play(sfVector2i pos_mouse, t_global *glb);
    void button_htp(sfVector2i pos_mouse, t_global *glb);
    void perso_custom (t_global *glb);
    void button_next(sfVector2i pos_mouse, t_global *glb);
    void button_previous(sfVector2i pos_mouse, t_global *glb);
    void switch_perso(t_global *glb);
    void switch_perso2(t_global *glb);
    void switch_perso3(t_global *glb);
    //!init
    void init_bkg(t_global *glb);
    void init_button_play(t_global *glb);
    void init_button_quit(t_global *glb);
    void init_button_setings(t_global *glb);
    void init_button_htp(t_global *glb);
    void perso(t_global *glb);
    void init_next(t_global *glb);
    void init_previous(t_global *glb);
    void init_chatbox(t_global *glb);
    void init_bkghtp(t_global *glb);
    void init_bkgset(t_global *glb);
    void init_chatbox(t_global *glb);
    void init_marcel(t_global *glb);
    void init_conor(t_global *glb);
    void init_gege(t_global *glb);
    void init_all_enemis(t_global *glb);
    void init_skl(t_global *glb);
    void init_org(t_global *glb);
    void init_bonhome(t_global *glb);
    void init_pb(t_global *glb);
    void init_pumpking(t_global *glb);
    void init_tree(t_global *glb);
    void init_santa(t_global *glb);
    //!display
    void display_chat(t_global *glb);
    void display_chatbox_player(t_global *glb);
    void display_chatbox_player2(t_global *glb);
    void display_chatbox_player3(t_global *glb);
    void display_marcelchat(t_global *glb);
    void display_conorchat(t_global *glb);
    void display_gegechat(t_global *glb);
    void display_sklchat(t_global *glb);
    void display_orgchat(t_global *glb);
    void display_pumpkinchat(t_global *glb);
    void display_treechat(t_global *glb);
    void display_pbchat(t_global *glb);
    void display_snowmanchat(t_global *glb);
    void display_player(t_global *glb);
    void draw_pnj(t_global *glb);
    void draw_enemi(t_global *glb);
    void chatbox1(t_global *glb);
    void name_perso(t_global *glb);
    void all_displaychat(t_global *glb);
    void word_word(t_global *glb);
    void draw_all_words(t_global *glb);
    //!menu
    void menu(t_global *glb);
    void htp(t_global *glb);
    //!events
    void event_box(t_global *glb);

#endif /* _HUGO_ */

#ifndef _ALLAN_
    #define _ALLAN_
    //!click
    void click_music_on(t_global *glb, int nb);
    void click_sound_on(t_global *glb, int nb);
    void click_fps30(t_global *glb, int nb);
    void click_fps60(t_global *glb, int nb);
    void click_fps120(t_global *glb, int nb);
    void click_returnb(t_global *glb, int nb);
    void click_homeb(t_global *glb, int nb);
    void click_resumeb(t_global *glb, int nb);
    void click_quitb2(t_global *glb, int nb);
    //!create
    void set_sprite(t_sprite *sprite);
    void set_setting(t_global *glb);
    void create_setting(t_global *glb);
    void set_pause(t_global *glb);
    void create_pause(t_global *glb);
    void draw_settings(t_global *glb);
    void draw_pause(t_global *glb);
    //!events
    void events_setting(t_global *glb);
    void events_setting2(t_global *glb, sfVector2i mouse);
    void events_setting3(t_global *glb, sfVector2i mouse);
    void events_setting4(t_global *glb, sfVector2i mouse);
    void events_pause(t_global *glb);
    void events_pause2(t_global *glb, sfVector2i mouse);
    //!rect
    void quitb(t_sprite *sprite);
    void music_onb(t_sprite *sprite);
    void sound_onb(t_sprite *sprite);
    void fps30(t_sprite * sprite);
    void fps60(t_sprite * sprite);
    void fps120(t_sprite * sprite);
    void returnb(t_sprite * sprite);
    void homeb (t_sprite *sprite);
    void resumeb (t_sprite *sprite);
    //!texture
    void texture_settings(t_global *glb);
    void texture_pause(t_global *glb);

#endif /* _ALLAN_ */

#ifndef _MAX_
    #define _MAX_

    //! Intro
    void init_clock_intro(t_global *glb);
    int intro(t_global *glb, int end);
    void check_intro_pos(t_global *glb);
    void launch_intro(t_global *glb);

    //! Fight
    void init_fight(t_global *glb);
    void init_pl(t_global *glb);
    bool event_fight(t_global *glb);
    void att_pressed(t_global *glb, sfVector2i mouse);
    void fight(t_global *glb);
    void update_enemy(t_global *glb);
    void update_skull(t_global *glb);
    void update_ogr(t_global *glb);
    void update_ppk(t_global *glb);
    void update_tree(t_global *glb);
    void update_pb(t_global *glb);
    void update_snw(t_global *glb);
    void update_santa(t_global *glb);
    void init_pdodge(t_global *glb);
    void init_pdef(t_global *glb);
    void init_atk(t_global *glb);
    void init_php(t_global *glb);
    void init_ehp(t_global *glb);
    void update_hp_atk(t_global *glb);
    void update_dodge_def(t_global *glb);
    void update_ehp(t_global *glb);
    void update_stats_fgt(t_global *glb);

    //! Attacks
    void first_attack(t_global *glb);
    void scnd_attack(t_global *glb);
    void third_attack(t_global *glb);
    void enemy_attack(t_global *glb);
#endif /* _MAX_ */

#ifndef _VIC_
    #define _VIC_

    t_sprite *create_object(sfVector2f pos, sfIntRect rect,
    sfTexture *txtr, sfVector2f sc);
    t_perso *init_player(void);
    t_sprite *init_map(sfTexture *txtr);
    t_sprite *init_loader(int sx, int sy);
    t_fx *init_fx(void);
    void creat_inv(t_global *glb);
    void inventory_custom(t_global *glb);

    void game(t_global *glb);

    void fade_out(t_sprite *fx, sfClock *clk, t_global *glb, int state);

    void right_move(t_global *glb);
    void left_move(t_global *glb);
    void up_move(t_global *glb);
    void down_move(t_global *glb);

    void right_dep(t_global *glb);
    void left_dep(t_global *glb);
    void up_dep(t_global *glb);
    void down_dep(t_global *glb);

    void event_game(t_global *glb);
    void event_inside(t_global *glb);
    int check_color(t_global *glb, int x, int y);

    sfSprite *how_map(t_global *glb);
    sfImage *what_bw_map(t_global *glb);

    void enter_tavern(t_global *glb);
    void exit_tavern(t_global *glb);
    void tp_tuto(t_global *glb);
    void tp_l_plaine(t_global *glb);
    void tp_r_plaine(t_global *glb);
    void tp_l_aut(t_global *glb);
    void tp_t_aut(t_global *glb);
    void tp_aut(t_global *glb);
    void tp_win(t_global *glb);

    int chek_tuto(t_global *glb, sfColor g);
    int chek_plaine(t_global *glb, sfColor g);
    int chek_aut(t_global *glb, sfColor g);
    int chek_winter(t_global *glb, sfColor g);

    void fight_event(t_global *glb);
    void fight_b1(t_global *glb);
    void fight_b2(t_global *glb);
    void fight_cross(t_global *glb);
    void fight_snowman(t_global *glb);
    void fight_punkin(t_global *glb);
    void fight_graveyard(t_global *glb);

    void right_move_inside(t_global *glb);
    void left_move_inside(t_global *glb);
    void up_move_inside(t_global *glb);
    void down_move_inside(t_global *glb);

    void inventory(t_global *glb);
    void fiiling_inv(t_global *glb);
    void draw_inv_bar(t_global *glb);
    void draw_inv(t_global *glb);
    void open_chest(t_global *glb);

    void init_inv(t_global *glb);
    void draw_stats(t_global *glb);

    void init_player_stats(t_global *glb);

    void init_marcel(t_global *glb);
    void init_all_pnj(t_global *glb);

    void talk_marcel(t_global *glb);
    void talk_conor(t_global *glb);
    void talk_gege(t_global *glb);

    void init_snow(t_global *glb);
    void anim_pnj(t_global *glb);
    void anim_snow(t_global *glb);

    void win(t_global *glb);
    void lose(t_global *glb);

    void init_pnj(t_global *glb);
    void init_win_lose(t_global *glb);
    void init_string(t_global *glb);
    void menu_settings(t_global *glb);
    void menu_pause(t_global *glb);

    void get_shov(t_global *glb);
    void get_stick(t_global *glb);

    int set_stats_atk(t_global *glb, t_sprite *sprt);
    int set_stats_def(t_global *glb, t_sprite *sprt);
    int set_stats_hp(t_global *glb, t_sprite *sprt);
    int set_stats_dodge(t_global *glb, t_sprite *sprt);

    void all_draw(t_global *glb);
    bool regen_hp(t_global *glb);

    void put_down(t_global *glb, sfVector2i mp);
    void pick_up(t_global *glb, sfVector2i mp);
    void equip(t_global *glb, char c, int nb, sfVector2i mp);

    void arm1(t_global *glb);
    void arm2(t_global *glb);
    void arm3(t_global *glb);

    void event_lose(t_global *glb);
    void restart(t_global *glb);
    void fight_santa(t_global *glb);

#endif /* _VIC_ */

#endif /* RPG */
