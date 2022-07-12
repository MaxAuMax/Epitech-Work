/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** snow_effect.c
*/

#include "rpg.h"

void init_snow(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/fx/snow.png", NULL);
    glb->fx->snow = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, txtr, (sfVector2f){1, 1});
    glb->fx->snow_clk = sfClock_create();
}

void anim_snow(t_global *glb)
{
    sfTime pl_time = sfClock_getElapsedTime(glb->fx->snow_clk);
    float pl_seconds = pl_time.microseconds / 1000000.0;
    if (pl_seconds > 0.3) {
        move_rect(&glb->fx->snow->rect, 1920, 1920 * 2);
        sfSprite_setTextureRect(glb->fx->snow->sp, glb->fx->snow->rect);
        sfClock_restart(glb->fx->snow_clk);
    }
    sfRenderWindow_drawSprite(glb->window->w, glb->fx->snow->sp, NULL);
}
