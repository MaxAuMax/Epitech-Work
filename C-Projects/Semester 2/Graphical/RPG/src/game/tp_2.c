/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** tp_2.c
*/

#include "rpg.h"

void tp_tuto(t_global *glb)
{
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    sfMusic_stop(glb->music->m_plaine);
    sfMusic_play(glb->music->musictuto);
    sfMusic_setVolume(glb->music->musictuto, 50);
    sfMusic_setLoop(glb->music->musictuto, sfTrue);
    glb->player->x = 7800;
    glb->player->y = 3440;
    glb->map->pos.x = -7800 + 1920/2;
    glb->map->pos.y = -3440 + 1080/2;
    glb->cur_map = glb->tuto_map->sp;
    glb->cur_map_bw = glb->tuto_map_bw;
    glb->int_map = 0;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}
