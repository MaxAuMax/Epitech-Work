/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** create.c
*/

#include "rpg.h"

void set_sprite(t_sprite *sprite)
{
    sfSprite_setScale(sprite->sp, sprite->scale);
    sfSprite_setPosition(sprite->sp, sprite->pos);
    sfSprite_setTexture(sprite->sp, sprite->txtr, sfFalse);
}

void set_setting(t_global *glb)
{
    set_sprite(glb->music_onb);
    set_sprite(glb->sound_onb);
    set_sprite(glb->fps30);
    set_sprite(glb->fps60);
    set_sprite(glb->fps120);
    set_sprite(glb->returnb);
}

void create_setting(t_global *glb)
{
    music_onb(glb->music_onb);
    sound_onb(glb->sound_onb);
    fps30(glb->fps30);
    fps60(glb->fps60);
    fps120(glb->fps120);
    returnb(glb->returnb);
}

void set_pause(t_global *glb)
{
    set_sprite(glb->homeb);
    set_sprite(glb->resumeb);
    set_sprite(glb->quitpause);
}

void create_pause(t_global *glb)
{
    homeb(glb->homeb);
    resumeb(glb->resumeb);
    quitb(glb->quitpause);
}
