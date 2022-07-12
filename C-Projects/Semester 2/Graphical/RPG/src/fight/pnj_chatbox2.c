/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** pnj_chatbox2.c
*/

#include "rpg.h"

void display_pumpkinchat(t_global *glb)
{
    sfSprite_setPosition(glb->pumpking->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->pumpking->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->pumpking->sp->sp,
    NULL);
    sfSprite_setPosition(glb->pumpking->sp->sp, glb->pumpking->sp->pos);
    sfSprite_setScale(glb->pumpking->sp->sp, glb->pumpking->sp->scale);
}

void display_treechat(t_global *glb)
{
    sfSprite_setPosition(glb->tree->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->tree->sp->sp, (sfVector2f){1, 1});
    sfRenderWindow_drawSprite(glb->window->w, glb->tree->sp->sp,
    NULL);
    sfSprite_setPosition(glb->tree->sp->sp, glb->tree->sp->pos);
    sfSprite_setScale(glb->tree->sp->sp, glb->tree->sp->scale);
}

void display_pbchat(t_global *glb)
{
    sfSprite_setPosition(glb->pb->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->pb->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->pb->sp->sp,
    NULL);
    sfSprite_setPosition(glb->pb->sp->sp, glb->pb->sp->pos);
    sfSprite_setScale(glb->pb->sp->sp, glb->pb->sp->scale);
}

void display_snowmanchat(t_global *glb)
{
    sfSprite_setPosition(glb->snowman->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->snowman->sp->sp, (sfVector2f){2, 2});
    sfRenderWindow_drawSprite(glb->window->w, glb->snowman->sp->sp,
    NULL);
    sfSprite_setPosition(glb->snowman->sp->sp, glb->snowman->sp->pos);
    sfSprite_setScale(glb->snowman->sp->sp, glb->snowman->sp->scale);
}

void display_player(t_global *glb)
{
    sfSprite_setPosition(glb->player->player->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->player->player->sp, (sfVector2f){4, 4});
    glb->player->player->rect.top = 0;
    glb->player->player->rect.left = 0;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp,
    NULL);
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setScale(glb->player->player->sp, glb->player->player->scale);
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}
