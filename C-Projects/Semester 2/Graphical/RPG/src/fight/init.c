/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init.c
*/

#include "rpg.h"

void init_bg(t_global *glb)
{
    glb->fgt->bg = malloc(sizeof(t_sprite));
    glb->fgt->bg->txtr =
    sfTexture_createFromFile("assets/fight/combat.png", NULL);
    glb->fgt->bg->pos = (sfVector2f){0, 0};
    glb->fgt->bg->rect = (sfIntRect){0, 0, 1920, 1080};
    glb->fgt->bg->sp = sfSprite_create();
    sfSprite_setTexture(glb->fgt->bg->sp, glb->fgt->bg->txtr, sfTrue);
    sfSprite_setTextureRect(glb->fgt->bg->sp, glb->fgt->bg->rect);
    sfSprite_setPosition(glb->fgt->bg->sp, glb->fgt->bg->pos);
}

void init_att(t_global *glb)
{
    glb->fgt->att = malloc(sizeof(t_sprite));
    glb->fgt->att->txtr =
    sfTexture_createFromFile("assets/fight/attack.png", NULL);
    glb->fgt->att->pos = (sfVector2f){263, 780};
    glb->fgt->att->rect = (sfIntRect){0, 0, 432, 144};
    glb->fgt->att->sp = sfSprite_create();
    sfSprite_setTexture(glb->fgt->att->sp, glb->fgt->att->txtr, sfTrue);
    sfSprite_setTextureRect(glb->fgt->att->sp, glb->fgt->att->rect);
    sfSprite_setPosition(glb->fgt->att->sp, glb->fgt->att->pos);
}

void init_ui_att(t_global *glb)
{
    glb->fgt->ui_att = malloc(sizeof(t_sprite));
    glb->fgt->ui_att->txtr =
    sfTexture_createFromFile("assets/fight/w_attack.png", NULL);
    glb->fgt->ui_att->pos = (sfVector2f){69, 180};
    glb->fgt->ui_att->rect = (sfIntRect){0, 0, 819, 546};
    glb->fgt->ui_att->sp = sfSprite_create();
    sfSprite_setTexture(glb->fgt->ui_att->sp, glb->fgt->ui_att->txtr, sfTrue);
    sfSprite_setTextureRect(glb->fgt->ui_att->sp, glb->fgt->ui_att->rect);
    sfSprite_setPosition(glb->fgt->ui_att->sp, glb->fgt->ui_att->pos);
}

void init_fight(t_global *glb)
{
    glb->fb1 = false;
    glb->fb2 = false;
    glb->fcross = false;
    glb->fsnman = false;
    glb->fgt->update = false;
    glb->atk_turn = true;
    glb->fgt->en_clk = malloc(sizeof(t_clock));
    glb->fgt->en_clk->clock = sfClock_create();
    init_bg(glb);
    init_att(glb);
    init_ui_att(glb);
    init_pl(glb);
    init_php(glb);
    init_atk(glb);
    init_pdef(glb);
    init_pdodge(glb);
    init_ehp(glb);
}
