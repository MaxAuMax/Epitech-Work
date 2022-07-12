/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** stats.c
*/

#include "rpg.h"

void set_stat_rect(t_global *glb, t_sprite *sprt, int y)
{
    if (sprt->rect.top == 0)
        glb->player->inv_stat_w->rect.top = 0;
    else if (sprt->rect.top == 48)
        glb->player->inv_stat_w->rect.top = 720;
    else if (sprt->rect.top == 96)
        glb->player->inv_stat_w->rect.top = 720 * 2;
    glb->player->inv_stat_w->pos.y = y;
    sfSprite_setPosition(glb->player->inv_stat_w->sp,
    glb->player->inv_stat_w->pos);
    sfSprite_setTextureRect(glb->player->inv_stat_w->sp,
    glb->player->inv_stat_w->rect);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->inv_stat_w->sp,
    NULL);
}

void draw_player_stats(t_global *glb, int stat, int y)
{
    sfText *hp = sfText_create();
    sfText_setCharacterSize(hp, 60);
    sfText_setFont(hp, sfFont_createFromFile("assets/font.ttf"));
    sfText_setPosition(hp, (sfVector2f) {780, y});
    char *str = NULL;
    if (stat != 0)
        str = my_atoi(stat);
    else str = "0";
    sfText_setString(hp, str);
    sfRenderWindow_drawText(glb->window->w, hp, NULL);
}

void draw_stats(t_global *glb)
{
    for (int i = 0; i < 4; i++) {
        if (glb->inv_bar[i] == 'w') {
            set_stat_rect(glb, glb->player->weapon, 310);
            glb->player->atk = set_stats_atk(glb, glb->player->weapon);
        }
        else if (glb->inv_bar[i] == 'h') {
            set_stat_rect(glb, glb->player->helmet, 170);
            glb->player->hp = set_stats_hp(glb, glb->player->helmet);
        }
        else if (glb->inv_bar[i] == 's') {
            set_stat_rect(glb, glb->player->shield, 590);
            glb->player->def = set_stats_def(glb, glb->player->shield);
        }
        else if (glb->inv_bar[i] == 'a') {
            set_stat_rect(glb, glb->player->armor, 450);
            glb->player->dodge = set_stats_dodge(glb, glb->player->armor);
        }
    }
    draw_player_stats(glb, glb->player->hp, 390);
    draw_player_stats(glb, glb->player->atk, 530);
    draw_player_stats(glb, glb->player->dodge, 670);
    draw_player_stats(glb, glb->player->def, 810);
}
