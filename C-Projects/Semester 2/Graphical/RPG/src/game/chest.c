/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** chest.c
*/

#include "rpg.h"

void weapon_upgrade(t_global *glb, int rct)
{
    glb->player->weapon->rect.left = rct, glb->chest->rect.top = 0;
    sfSprite_setTextureRect(glb->chest->sp, glb->chest->rect);
    glb->player->weapon->pos = (sfVector2f){215, 288};
    sfRenderWindow_drawSprite(glb->window->w, glb->chest->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->weapon->sp, NULL);
    sfSprite_setPosition(glb->player->weapon->sp, glb->player->weapon->pos);
}

void open_chest(t_global *glb)
{
    sfColor g = sfImage_getPixel(glb->cur_map_bw,
    glb->player->x + glb->player->player->rect.width, glb->player->y - 35);
    if (g.r == 0 && g.g == 255 && g.b == 0) {
        if (!glb->show_inv)
            glb->show_inv = true;
        if (glb->int_map == 1 && glb->player->weapon->rect.top == 0) {
            glb->inv_arr[0][0] = 'w';
            weapon_upgrade(glb, 0);
        } else if (glb->int_map == 2 && glb->player->weapon->rect.top == 0) {
            weapon_upgrade(glb, 48);
        } else if (glb->int_map == 3 && glb->player->weapon->rect.top == 48) {
            weapon_upgrade(glb, 48);
        } else {
            glb->chest->rect.left = glb->chest->rect.width;
            sfSprite_setTextureRect(glb->chest->sp, glb->chest->rect);
        }
    }
}

void set_to_max_hp(t_global *glb)
{
    glb->player->war_s->hp = glb->player->war_s->hp_max;
    glb->player->mage_s->hp = glb->player->mage_s->hp_max;
    glb->player->lumb_s->hp = glb->player->lumb_s->hp_max;
}

bool regen_hp(t_global *glb)
{
    char *str = "Hey my man. Voici 3 bierres pour retrouver toute ta vie.   ";
    char *rts = "Hey my man. Il te faut 20 gold pour commander.";
    sfColor g = sfImage_getPixel(glb->cur_map_bw,
    glb->player->x + glb->player->player->rect.width, glb->player->y - 35);
    if (g.r == 200 && g.g == 180 && g.b == 50 && !glb->order) {
        if (glb->player->gold >= 20) {
            glb->player->gold -= 20, glb->order = true;
            glb->talk = true, glb->dsp = false, glb->chat = str;
            glb->talk_conor = true, glb->cur_pnj = 2, glb->nm = "Conor";
            glb->next_scene = 1, glb->scene = 7, set_to_max_hp(glb);
            return true;
        } else {
            glb->talk = true, glb->dsp = false, glb->chat = rts;
            glb->talk_conor = true, glb->nm = "Conor", glb->cur_pnj = 2;
            glb->next_scene = 1, glb->scene = 7, glb->order = false;
            return false;
        }
    }
    return false;
}
