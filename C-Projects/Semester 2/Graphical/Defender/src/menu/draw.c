/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** draw.c
*/

#include "my.h"

void draw_menu(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->bcg.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->playb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,
    global->settingb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->quitb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->titleb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,global->aboutb.sp, NULL);
}

void draw_settings(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->bcg_set.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,
    global->music_onb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,
    global->sound_onb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,global->fps30.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,global->fps60.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,global->fps120.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->returnb.sp, NULL);
}

void draw_about(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->aboutbcg.sp,
    NULL);
    sfRenderWindow_drawSprite(global->window.window, global->returnb.sp, NULL);
}

void draw_pause(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->bcg_pause.sp,
    NULL);
    sfRenderWindow_drawSprite(global->window.window, global->resumeb.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->quitb2.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window,global->homeb.sp, NULL);
}
