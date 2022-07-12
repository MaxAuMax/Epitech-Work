/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** create.c
*/

#include "my.h"

void set_sprite(t_sprite sprite)
{
    sfSprite_setScale(sprite.sp, sprite.scale);
    sfSprite_setPosition(sprite.sp, sprite.pos);
    sfSprite_setTexture(sprite.sp, sprite.texture, sfFalse);
}

void set_menu(t_global *global)
{
    set_sprite(global->playb);
    set_sprite(global->bcg);
    set_sprite(global->settingb);
    set_sprite(global->quitb);
    set_sprite(global->titleb);
    set_sprite(global->aboutb);
}

void create_menu(t_global *global)
{
    playb(&global->playb);
    background_menu(&global->bcg);
    settingb(&global->settingb);
    quitb(&global->quitb);
    title_menu_rect(&global->titleb);
    aboutb(&global->aboutb);
}

void set_setting(t_global *global)
{
    set_sprite(global->music_onb);
    set_sprite(global->sound_onb);
    set_sprite(global->bcg_set);
    set_sprite(global->fps30);
    set_sprite(global->fps60);
    set_sprite(global->fps120);
    set_sprite(global->returnb);
}

void create_setting(t_global *global)
{
    music_onb(&global->music_onb);
    sound_onb(&global->sound_onb);
    background_setting(&global->bcg_set);
    fps30(&global->fps30);
    fps60(&global->fps60);
    fps120(&global->fps120);
    returnb(&global->returnb);
}

void set_about(t_global *global)
{
    set_sprite(global->aboutbcg);
    set_sprite(global->returnb);
}

void create_about(t_global *global)
{
    background_aboutb(&global->aboutbcg);
    returnb(&global->returnb);
}

void set_pause(t_global *global)
{
    set_sprite(global->bcg_pause);
    set_sprite(global->quitb2);
    set_sprite(global->homeb);
    set_sprite(global->resumeb);
}

void create_pause(t_global *global)
{
    background_pause(&global->bcg_pause);
    resumeb(&global->resumeb);
    quitb2(&global->quitb2);
    homeb(&global->homeb);
}
