/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fight.c
*/

#include "rpg.h"

void update_player(t_global *glb)
{
    glb->player->player->pos = (sfVector2f){560, 400};
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setScale(glb->player->player->sp, (sfVector2f){4, 4});
}

void draw_fight(t_global *glb)
{
    update_stats_fgt(glb);
    sfRenderWindow_drawSprite(glb->window->w, glb->fgt->bg->sp, NULL);
    update_player(glb);
    update_enemy(glb);
    sfRenderWindow_drawText(glb->window->w, glb->fgt->php->text, NULL);
    sfRenderWindow_drawText(glb->window->w, glb->fgt->patk->text, NULL);
    sfRenderWindow_drawText(glb->window->w, glb->fgt->pdef->text, NULL);
    sfRenderWindow_drawText(glb->window->w, glb->fgt->pdodge->text, NULL);
    sfRenderWindow_drawText(glb->window->w, glb->fgt->ehp->text, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp,
    NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fgt->ui_att->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fgt->att->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->fgt->pl->sp, NULL);
    sfRenderWindow_display(glb->window->w);
}

void check_cur_pl(t_global *glb)
{
    if (glb->selct == 0)
        glb->fgt->ui_att->rect.top = 0;
    if (glb->selct == 1)
        glb->fgt->ui_att->rect.top = 1092;
    if (glb->selct == 2)
        glb->fgt->ui_att->rect.top = 546;
}

void check_loose(t_global *glb)
{
    if (glb->player->hp <= 0) {
        if (glb->selct < 2)
            glb->selct++, perso_custom(glb);
        else
            glb->selct = 0, perso_custom(glb);
    }
    if (glb->player->war_s->hp <= 0 && glb->player->mage_s->hp <= 0
        && glb->player->lumb_s->hp <= 0)
        glb->scene = 8;
}

void fight(t_global *glb)
{
    sfRenderWindow_setMouseCursorVisible(glb->window->w, sfTrue);
    check_cur_pl(glb);
    sfRenderWindow_clear(glb->window->w, sfBlack);
    bool end = event_fight(glb);
    sfSprite_setTextureRect(glb->fgt->ui_att->sp, glb->fgt->ui_att->rect);
    sfSprite_setTextureRect(glb->fgt->att->sp, glb->fgt->att->rect);
    sfSprite_setTextureRect(glb->fgt->pl->sp, glb->fgt->pl->rect);
    draw_fight(glb);
    enemy_attack(glb);
    if (glb->fgt->en_hp <= 0)
        end = true;
    check_loose(glb);
    if (end == true) {
        sfSprite_setScale(glb->player->player->sp, glb->player->player->scale);
        sfSprite_setTextureRect(glb->player->player->sp,
        glb->player->player->rect);
        glb->player->gold += 12;
        glb->scene = 1;
    }
}
