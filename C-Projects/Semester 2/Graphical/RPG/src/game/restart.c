/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** restart.c
*/

#include "rpg.h"

void reset_enemies(t_global *glb)
{
    glb->skl->x = 3275, glb->skl->y = -1050, glb->skl->hp = 30;
    glb->skl->atk = 10;
    glb->org->x = 4575, glb->org->y = -1275, glb->org->hp = 35;
    glb->org->atk = 13;
    glb->snowman->x = -2582, glb->snowman->y = -202, glb->snowman->hp = 55;
    glb->snowman->atk = 25;
    glb->pb->x = -1200, glb->pb->y = -670, glb->pb->hp = 50;
    glb->pb->atk = 22;
    glb->pumpking->x = -2575, glb->pumpking->y = -200, glb->pumpking->hp = 40;
    glb->pumpking->atk = 16;
    glb->tree->x = -2575, glb->tree->y = -200, glb->tree->hp = 45;
    glb->tree->atk = 19;
}

void reset_pnj(t_global *glb)
{
    glb->marcel->x = 1070, glb->marcel->y = 350;
    glb->conor->x = 1370, glb->conor->y = -250;
    glb->gege->x = 3460, glb->gege->y = -800;
}

void reset_perso(t_global *glb)
{
    glb->player->x = 3600, glb->player->y = 4000;
    glb->player->atk = glb->player->war_s->atk;
    init_player_stats(glb);
}

void restart(t_global *glb)
{
    reset_enemies(glb);
    reset_pnj(glb);
    reset_perso(glb);
    glb->scene = 0;
    sfRenderWindow_setMouseCursorVisible(glb->window->w, sfTrue);
    sfSprite_setScale(glb->player->player->sp, (sfVector2f){4, 4});
    sfSprite_setPosition(glb->player->player->sp,
            (sfVector2f){1920/2 - glb->player->player->rect.width * 2,
            1080/2 - glb->player->player->rect.height * 2});
}
