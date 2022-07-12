/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** enter.c
*/

#include "rpg.h"

void stop_music(t_global *glb)
{
    sfMusic_stop(glb->music->m_plaine), sfMusic_stop(glb->music->musicaut);
    sfMusic_play(glb->music->musictav), sfMusic_stop(glb->music->m_win);
    sfMusic_setVolume(glb->music->musictav, 50);
    sfMusic_setLoop(glb->music->musictav, sfTrue);
}

void enter_tavern(t_global *glb)
{
    stop_music(glb);
    glb->enter_x = glb->player->x, glb->enter_y = glb->player->y;
    glb->player->x = 920, glb->player->y = 760;
    glb->cur_map = glb->house_inside->sp, glb->order = false;
    sfSprite_setPosition(glb->house_inside->sp, (sfVector2f){0, 0});
    sfSprite_setPosition(glb->cur_map, (sfVector2f){0, 0});
    glb->inside = true, glb->cur_map_bw = glb->house_inside_bw;
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    glb->conor->sp->pos.x = 550, glb->conor->sp->pos.y = 250;
    sfSprite_setPosition(glb->conor->sp->sp, glb->conor->sp->pos);
    glb->player->player->pos.x = glb->player->x;
    glb->player->player->pos.y = glb->player->y;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->house_inside->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
}

void change_music(t_global *glb)
{
    if (glb->int_map == 1) {
        sfMusic_play(glb->music->m_plaine);
        sfMusic_setVolume(glb->music->m_plaine, 50);
        sfMusic_setLoop(glb->music->m_plaine, sfTrue);
    } else if (glb->int_map == 2)
        sfMusic_play(glb->music->musicaut),
        sfMusic_setVolume(glb->music->musicaut, 50),
        sfMusic_setLoop(glb->music->musicaut, sfTrue);
    else {
        sfMusic_play(glb->music->m_win);
        sfMusic_setVolume(glb->music->m_win, 50);
        sfMusic_setLoop(glb->music->m_win, sfTrue);
    }
}

void exit_tavern(t_global *glb)
{
    sfMusic_stop(glb->music->musictav);
    change_music(glb);
    glb->player->x = glb->enter_x, glb->player->y = glb->enter_y;
    glb->cur_map = how_map(glb);
    glb->inside = false, glb->cur_map_bw = what_bw_map(glb);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 0);
    glb->player->player->pos.x = 1920/2, glb->player->player->pos.y = 1080/2;
    glb->conor->sp->pos.x = -500, glb->conor->sp->pos.y = -300;
    sfSprite_setPosition(glb->conor->sp->sp, glb->conor->sp->pos);
    sfSprite_setPosition(glb->cur_map,
    (sfVector2f) {-glb->player->x + 1920/2, -glb->player->y + 1080/2});
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp, NULL);
    fade_out(glb->fx->fade_dark, glb->player->clk, glb, 1);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp, NULL);
}
