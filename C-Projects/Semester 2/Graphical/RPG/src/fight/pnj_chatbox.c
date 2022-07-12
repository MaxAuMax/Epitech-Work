/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** pnj_chatbox.c
*/

#include "rpg.h"

void display_marcelchat(t_global *glb)
{
    sfSprite_setPosition(glb->marcel->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->marcel->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->marcel->sp->sp, NULL);
    sfSprite_setPosition(glb->marcel->sp->sp, glb->marcel->sp->pos);
    sfSprite_setScale(glb->marcel->sp->sp, glb->marcel->sp->scale);
}

void display_conorchat(t_global *glb)
{
    sfSprite_setPosition(glb->conor->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->conor->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->conor->sp->sp, NULL);
    sfSprite_setPosition(glb->conor->sp->sp, glb->conor->sp->pos);
    sfSprite_setScale(glb->conor->sp->sp, glb->conor->sp->scale);
}

void display_gegechat(t_global *glb)
{
    sfSprite_setPosition(glb->gege->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->gege->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->gege->sp->sp, NULL);
    sfSprite_setPosition(glb->gege->sp->sp, glb->gege->sp->pos);
    sfSprite_setScale(glb->gege->sp->sp, glb->gege->sp->scale);
}

void display_sklchat(t_global *glb)
{
    sfSprite_setPosition(glb->skl->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->skl->sp->sp, (sfVector2f){8, 8});
    sfRenderWindow_drawSprite(glb->window->w, glb->skl->sp->sp, NULL);
    sfSprite_setPosition(glb->skl->sp->sp, glb->skl->sp->pos);
    sfSprite_setScale(glb->skl->sp->sp, glb->skl->sp->scale);
}

void display_orgchat(t_global *glb)
{
    sfSprite_setPosition(glb->org->sp->sp, (sfVector2f){100, 750});
    sfSprite_setScale(glb->org->sp->sp, (sfVector2f){4, 4});
    sfRenderWindow_drawSprite(glb->window->w, glb->org->sp->sp, NULL);
    sfSprite_setPosition(glb->org->sp->sp, glb->org->sp->pos);
    sfSprite_setScale(glb->org->sp->sp, glb->org->sp->scale);
}
