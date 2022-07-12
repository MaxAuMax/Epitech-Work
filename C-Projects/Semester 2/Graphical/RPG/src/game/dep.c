/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** dep.c
*/

#include "rpg.h"

void right_dep(t_global *glb)
{
    glb->map->pos.x -= 10, glb->player->x += 10;
    glb->marcel->sp->pos.x -= 10, glb->conor->sp->pos.x -= 10;
    glb->gege->sp->pos.x -= 10;
    if (glb->int_map == 1) glb->skl->sp->pos.x -= 10,
        glb->org->sp->pos.x -= 10, glb->player->armor->pos.x -= 10;
    if (glb->int_map == 3) glb->snowman->sp->pos.x -= 10,
        glb->pb->sp->pos.x -= 10;
    sfTime pl_time;
    float pl_seconds;
    pl_time = sfClock_getElapsedTime(glb->player->walk);
    pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3)
        move_rect(&glb->player->player->rect,
        glb->player->player->rect.width,
        glb->player->player->rect.width * 3),
        sfClock_restart(glb->player->walk);
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void left_dep(t_global *glb)
{
    glb->map->pos.x += 10, glb->player->x -= 10;
    glb->marcel->sp->pos.x += 10, glb->conor->sp->pos.x += 10;
    glb->gege->sp->pos.x += 10;
    if (glb->int_map == 1) glb->skl->sp->pos.x += 10,
        glb->org->sp->pos.x += 10, glb->player->armor->pos.x += 10;
    if (glb->int_map == 3) glb->snowman->sp->pos.x += 10,
        glb->pb->sp->pos.x += 10;
    sfTime pl_time; float pl_seconds;
    pl_time = sfClock_getElapsedTime(glb->player->walk);
    pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->player->player->rect,
        glb->player->player->rect.width,
        glb->player->player->rect.width * 3);
        sfClock_restart(glb->player->walk);
    }
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void up_dep(t_global *glb)
{
    glb->map->pos.y += 10, glb->player->y -= 10;
    glb->marcel->sp->pos.y += 10, glb->conor->sp->pos.y += 10;
    glb->gege->sp->pos.y += 10;
    if (glb->int_map == 1) glb->skl->sp->pos.y += 10,
        glb->org->sp->pos.y += 10, glb->player->armor->pos.y += 10;
    if (glb->int_map == 3) glb->snowman->sp->pos.y += 10,
        glb->pb->sp->pos.y += 10;
    sfTime pl_time; float pl_seconds;
    pl_time = sfClock_getElapsedTime(glb->player->walk);
    pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->player->player->rect,
        glb->player->player->rect.width,
        glb->player->player->rect.width * 3);
        sfClock_restart(glb->player->walk);
    }
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void down_dep(t_global *glb)
{
    glb->map->pos.y -= 10, glb->player->y += 10;
    glb->marcel->sp->pos.y -= 10, glb->conor->sp->pos.y -= 10;
    glb->gege->sp->pos.y -= 10;
    if (glb->int_map == 1) glb->skl->sp->pos.y -= 10,
        glb->org->sp->pos.y -= 10, glb->player->armor->pos.y -= 10;
    if (glb->int_map == 3) glb->snowman->sp->pos.y -= 10,
        glb->pb->sp->pos.y -= 10;
    sfTime pl_time;
    float pl_seconds;
    pl_time = sfClock_getElapsedTime(glb->player->walk);
    pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->player->player->rect,
        glb->player->player->rect.width,
        glb->player->player->rect.width * 3);
        sfClock_restart(glb->player->walk);
    }
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void all_draw(t_global *glb)
{
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, glb->map->pos);
    sfSprite_setPosition(glb->marcel->sp->sp, glb->marcel->sp->pos);
    sfSprite_setPosition(glb->conor->sp->sp, glb->conor->sp->pos);
    sfSprite_setPosition(glb->gege->sp->sp, glb->gege->sp->pos);
    sfSprite_setPosition(glb->skl->sp->sp, glb->skl->sp->pos);
    sfSprite_setPosition(glb->org->sp->sp, glb->org->sp->pos);
    sfSprite_setPosition(glb->snowman->sp->sp, glb->snowman->sp->pos);
    sfSprite_setPosition(glb->pb->sp->sp, glb->pb->sp->pos);
    sfSprite_setPosition(glb->player->armor->sp, glb->player->armor->pos);
}
