/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** destroy.c
*/

#include "my.h"

int destroy_it(t_global *global)
{
    sfRenderWindow_destroy(global->window.window);
    all_sprite(global);
    sfClock_destroy(global->enemy_clock.clock);
    d_dbl_more(global->all_tiles);
    free(global->all_tiles);
    d_dbl_more(global->all_enemies);
    free(global->all_enemies);
    d_texture(global);
    sfMusic_destroy(global->music);
}

void all_sprite(t_global *global)
{
    d_sprite(global->playb);
    d_sprite(global->cross);
    d_sprite(global->bcg);
    d_sprite(global->settingb);
    d_sprite(global->quitb);
    d_sprite(global->music_onb);
    d_sprite(global->titleb);
    d_sprite(global->sound_onb);
    d_sprite(global->bcg_set);
    d_sprite(global->fps30);
    d_sprite(global->fps60);
    d_sprite(global->fps120);
    d_sprite(global->returnb);
    d_sprite(global->aboutb);
    d_sprite(global->aboutbcg);
}

void d_sprite(t_sprite sprite)
{
    sfSprite_destroy(sprite.sp);
    sfTexture_destroy(sprite.texture);
}

void d_texture(t_global *global)
{
    sfTexture_destroy(global->grass);
    sfTexture_destroy(global->dirt);
    sfTexture_destroy(global->turret);
    sfTexture_destroy(global->en_red);
}

void d_dbl_more(t_more **all)
{
    for (int i = 0; all[i] != NULL; i++) {
        sfSprite_destroy(all[i]->sp);
        free(all[i]);
    }
}
