/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** update_en.c
*/

#include "rpg.h"

void update_skull(t_global *glb)
{
    glb->skl->sp->pos = (sfVector2f){1210, 420};
    glb->skl->sp->scale = (sfVector2f){6.5, 6.5};
    sfSprite_setPosition(glb->skl->sp->sp, glb->skl->sp->pos);
    sfSprite_setScale(glb->skl->sp->sp, glb->skl->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->skl->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->skl->hp;
        glb->fgt->en_atk = glb->skl->atk;
        glb->fgt->update = true;
    }
}

void update_ogr(t_global *glb)
{
    glb->org->sp->pos = (sfVector2f){1190, 400};
    glb->org->sp->scale = (sfVector2f){6, 6};
    sfSprite_setPosition(glb->org->sp->sp, glb->org->sp->pos);
    sfSprite_setScale(glb->org->sp->sp, glb->org->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->org->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->org->hp;
        glb->fgt->en_atk = glb->org->atk;
        glb->fgt->update = true;
    }
}

void update_enemy2(t_global *glb)
{
    switch (glb->cur_en) {
        case 4:
            update_pb(glb);
            return;
        case 5:
            update_snw(glb);
            return;
        case 6:
            update_santa(glb);
            return;
    }
}

void update_enemy(t_global *glb)
{
    switch (glb->cur_en) {
        case 0:
            update_skull(glb);
            return;
        case 1:
            update_ogr(glb);
            return;
        case 2:
            update_ppk(glb);
            return;
        case 3:
            update_tree(glb);
            return;
    }
    update_enemy2(glb);
}
