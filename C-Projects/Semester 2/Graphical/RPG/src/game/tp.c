/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** tp.c
*/

#include "rpg.h"

void tp_win(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->musicaut);
    sfMusic_play(glb->music->m_win);
    sfMusic_setVolume(glb->music->m_win, 50);
    sfMusic_setLoop(glb->music->m_win, sfTrue);
    glb->player->x = 7850;
    glb->player->y = 4500;
    glb->map->pos.x = -7850 + 1920/2;
    glb->map->pos.y = -4500 + 1080/2;
    glb->cur_map = glb->win_map->sp;
    glb->cur_map_bw = glb->win_map_bw;
    glb->int_map = 3;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}

void tp_l_aut(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->m_plaine);
    sfMusic_play(glb->music->musicaut);
    sfMusic_setVolume(glb->music->musicaut, 50);
    sfMusic_setLoop(glb->music->musicaut, sfTrue);
    glb->player->x = 3180;
    glb->player->y = 3800;
    glb->map->pos.x = -3180 + 1920/2;
    glb->map->pos.y = -3800 + 1080/2;
    glb->cur_map = glb->aut_map->sp;
    glb->cur_map_bw = glb->aut_map_bw;
    glb->int_map = 2;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}

void tp_t_aut(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->m_win);
    sfMusic_play(glb->music->musicaut);
    sfMusic_setVolume(glb->music->musicaut, 50);
    sfMusic_setLoop(glb->music->musicaut, sfTrue);
    glb->player->x = 7860;
    glb->player->y = 1645;
    glb->map->pos.x = -7860 + 1920/2;
    glb->map->pos.y = -1645 + 1080/2;
    glb->cur_map = glb->aut_map->sp;
    glb->cur_map_bw = glb->aut_map_bw;
    glb->int_map = 2;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}

void tp_r_plaine(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->musicaut);
    sfMusic_play(glb->music->m_plaine);
    sfMusic_setVolume(glb->music->m_plaine, 50);
    sfMusic_setLoop(glb->music->m_plaine, sfTrue);
    glb->player->x = 8000;
    glb->player->y = 3200;
    glb->map->pos.x = -8000 + 1920/2;
    glb->map->pos.y = -3200 + 1080/2;
    glb->cur_map = glb->map->sp;
    glb->cur_map_bw = glb->map_bw;
    glb->int_map = 1;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->map->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}

void tp_l_plaine(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->musictuto);
    sfMusic_play(glb->music->m_plaine);
    sfMusic_setVolume(glb->music->m_plaine, 50);
    sfMusic_setLoop(glb->music->m_plaine, sfTrue);
    glb->player->x = 2800;
    glb->player->y = 4570;
    glb->map->pos.x = -2800 + 1920/2;
    glb->map->pos.y = -4570 + 1080/2;
    glb->cur_map = glb->map->sp;
    glb->cur_map_bw = glb->map_bw;
    glb->int_map = 1;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->map->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}
