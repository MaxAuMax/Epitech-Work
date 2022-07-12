/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_menu2.c
*/

#include "rpg.h"

void perso(t_global *glb)
{
    sfTime pl_time;
    float pl_seconds;
    pl_time = sfClock_getElapsedTime(glb->player->walk);
    pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->player->player->rect, glb->player->player->rect.width,
        glb->player->player->rect.width * 3);
        sfClock_restart(glb->player->walk);
    }
    sfSprite_setTextureRect(glb->player->player->sp,
        glb->player->player->rect);
    sfRenderWindow_drawSprite(glb->window->w,
    glb->player->player->sp, NULL);
}

void init_next(t_global *glb)
{
    glb->next->rect.top = 0;
    glb->next->rect.left = 0;
    glb->next->rect.width = 14;
    glb->next->rect.height = 10;

    glb->next->txtr =
    sfTexture_createFromFile("assets/menu/arrow_right.png", NULL);
    glb->next->sp = sfSprite_create();
    glb->next->pos = (sfVector2f) {1050, 550};
    glb->next->scale = (sfVector2f) {4, 4};
    sfSprite_setTexture(glb->next->sp, glb->next->txtr, sfFalse);
    sfSprite_setTextureRect(glb->next->sp, glb->next->rect);
    sfSprite_setPosition(glb->next->sp, glb->next->pos);
    sfSprite_setScale(glb->next->sp, glb->next->scale);
}

void init_previous(t_global *glb)
{
    glb->previous->rect.top = 0;
    glb->previous->rect.left = 0;
    glb->previous->rect.width = 14;
    glb->previous->rect.height = 10;

    glb->previous->txtr =
    sfTexture_createFromFile("assets/menu/arrow_left.png", NULL);
    glb->previous->sp = sfSprite_create();
    glb->previous->pos = (sfVector2f) {820, 550};
    glb->previous->scale = (sfVector2f) {4, 4};
    sfSprite_setTexture(glb->previous->sp, glb->previous->txtr, sfFalse);
    sfSprite_setTextureRect(glb->previous->sp, glb->previous->rect);
    sfSprite_setPosition(glb->previous->sp, glb->previous->pos);
    sfSprite_setScale(glb->previous->sp, glb->previous->scale);
}

void menu_settings(t_global *glb)
{
    sfRenderWindow_display(glb->window->w);
    events_setting(glb);
    texture_settings(glb);
    sfRenderWindow_clear(glb->window->w, glb->window->color);
    draw_settings(glb);
}

void menu_pause(t_global *glb)
{
    sfRenderWindow_display(glb->window->w);
    events_pause(glb);
    texture_pause(glb);
    draw_pause(glb);
}
