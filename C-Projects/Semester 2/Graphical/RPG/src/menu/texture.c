/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** texture.c
*/

#include "rpg.h"

void texture_settings(t_global *glb)
{
    sfSprite_setTextureRect(glb->music_onb->sp, glb->music_onb->rect);
    sfSprite_setTextureRect(glb->sound_onb->sp, glb->sound_onb->rect);
    sfSprite_setTextureRect(glb->fps30->sp, glb->fps30->rect);
    sfSprite_setTextureRect(glb->fps60->sp, glb->fps60->rect);
    sfSprite_setTextureRect(glb->fps120->sp, glb->fps120->rect);
    sfSprite_setTextureRect(glb->returnb->sp, glb->returnb->rect);
}

void texture_pause(t_global *glb)
{
    sfSprite_setTextureRect(glb->homeb->sp, glb->homeb->rect);
    sfSprite_setTextureRect(glb->resumeb->sp, glb->resumeb->rect);
    sfSprite_setTextureRect(glb->quitpause->sp, glb->quitpause->rect);
}
