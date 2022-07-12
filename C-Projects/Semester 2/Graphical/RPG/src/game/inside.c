/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** inside.c
*/

#include "rpg.h"

void right_move_inside(t_global *glb)
{
    if (check_color(glb, glb->player->x +
    glb->player->player->rect.width + 10, glb->player->y)) {
        glb->player->x += 10;
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height * 2)
        glb->player->player->rect.top = glb->player->player->rect.height * 2;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    move_sprite(glb->player->player->sp, glb->player->x, glb->player->y);
}

void left_move_inside(t_global *glb)
{
    if (check_color(glb, glb->player->x - 10,
    glb->player->y + glb->player->player->rect.height/2)) {
        glb->player->x -= 10;
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height)
        glb->player->player->rect.top = glb->player->player->rect.height;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    move_sprite(glb->player->player->sp, glb->player->x, glb->player->y);
}

void up_move_inside(t_global *glb)
{
    if (check_color(glb, glb->player->x, glb->player->y - 10)) {
        glb->player->y -= 10;
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height * 3)
        glb->player->player->rect.top = glb->player->player->rect.height * 3;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    move_sprite(glb->player->player->sp, glb->player->x, glb->player->y);
}

void down_move_inside(t_global *glb)
{
    if (check_color(glb, glb->player->x, glb->player->y +
    glb->player->player->rect.height * 2 + 10)) {
        glb->player->y += 10;
    }
    if (glb->player->player->rect.top != 0)
        glb->player->player->rect.top = 0;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    move_sprite(glb->player->player->sp, glb->player->x, glb->player->y);
}
