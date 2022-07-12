/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** texture.c
*/

#include "my.h"

void texture_menu(t_global *global)
{
    sfSprite_setTextureRect(global->playb.sp, global->playb.rect);
    sfSprite_setTextureRect(global->bcg.sp, global->bcg.rect);
    sfSprite_setTextureRect(global->settingb.sp, global->settingb.rect);
    sfSprite_setTextureRect(global->quitb.sp, global->quitb.rect);
    sfSprite_setTextureRect(global->titleb.sp, global->titleb.rect);
    sfSprite_setTextureRect(global->aboutb.sp, global->aboutb.rect);
}

void texture_settings(t_global *global)
{
    sfSprite_setTextureRect(global->music_onb.sp, global->music_onb.rect);
    sfSprite_setTextureRect(global->bcg_set.sp, global->bcg_set.rect);
    sfSprite_setTextureRect(global->sound_onb.sp, global->sound_onb.rect);
    sfSprite_setTextureRect(global->fps30.sp, global->fps30.rect);
    sfSprite_setTextureRect(global->fps60.sp, global->fps60.rect);
    sfSprite_setTextureRect(global->fps120.sp, global->fps120.rect);
    sfSprite_setTextureRect(global->returnb.sp, global->returnb.rect);
}

void texture_about(t_global *global)
{
    sfSprite_setTextureRect(global->aboutbcg.sp, global->aboutbcg.rect);
    sfSprite_setTextureRect(global->returnb.sp, global->returnb.rect);
}

void texture_pause(t_global *global)
{
    sfSprite_setTextureRect(global->bcg_set.sp, global->bcg_pause.rect);
    sfSprite_setTextureRect(global->resumeb.sp, global->resumeb.rect);
    sfSprite_setTextureRect(global->quitb2.sp, global->quitb2.rect);
    sfSprite_setTextureRect(global->homeb.sp, global->homeb.rect);
}