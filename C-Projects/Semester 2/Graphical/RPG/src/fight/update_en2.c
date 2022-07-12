/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** update_en2.c
*/

#include "rpg.h"

void update_ppk(t_global *glb)
{
    glb->pumpking->sp->pos = (sfVector2f){1190, 400};
    glb->pumpking->sp->scale = (sfVector2f){5, 5};
    sfSprite_setPosition(glb->pumpking->sp->sp, glb->pumpking->sp->pos);
    sfSprite_setScale(glb->pumpking->sp->sp, glb->pumpking->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->pumpking->sp->sp,
    NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->pumpking->hp;
        glb->fgt->en_atk = glb->pumpking->atk;
        glb->fgt->update = true;
    }
}

void update_tree(t_global *glb)
{
    glb->tree->sp->pos = (sfVector2f){1180, 350};
    glb->tree->sp->scale = (sfVector2f){2.6, 2.6};
    sfSprite_setPosition(glb->tree->sp->sp, glb->tree->sp->pos);
    sfSprite_setScale(glb->tree->sp->sp, glb->tree->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->tree->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->tree->hp;
        glb->fgt->en_atk = glb->tree->atk;
        glb->fgt->update = true;
    }
}

void update_pb(t_global *glb)
{
    glb->pb->sp->pos = (sfVector2f){1200, 400};
    glb->pb->sp->scale = (sfVector2f){4.7, 4.7};
    sfSprite_setPosition(glb->pb->sp->sp, glb->pb->sp->pos);
    sfSprite_setScale(glb->pb->sp->sp, glb->pb->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->pb->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->pb->hp;
        glb->fgt->en_atk = glb->pb->atk;
        glb->fgt->update = true;
    }
}

void update_snw(t_global *glb)
{
    glb->snowman->sp->pos = (sfVector2f){1190, 400};
    glb->snowman->sp->scale = (sfVector2f){3.4, 3.4};
    sfSprite_setPosition(glb->snowman->sp->sp, glb->snowman->sp->pos);
    sfSprite_setScale(glb->snowman->sp->sp, glb->snowman->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->snowman->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->snowman->hp;
        glb->fgt->en_atk = glb->snowman->atk;
        glb->fgt->update = true;
    }
}

void update_santa(t_global *glb)
{
    glb->santa->sp->pos = (sfVector2f){1150, 300};
    glb->santa->sp->scale = (sfVector2f){1.6, 1.6};
    sfSprite_setPosition(glb->santa->sp->sp, glb->santa->sp->pos);
    sfSprite_setScale(glb->santa->sp->sp, glb->santa->sp->scale);
    sfRenderWindow_drawSprite(glb->window->w, glb->santa->sp->sp, NULL);
    if (glb->fgt->update == false) {
        glb->fgt->en_hp = glb->santa->hp;
        glb->fgt->en_atk = glb->santa->atk;
        glb->fgt->update = true;
    }
}
