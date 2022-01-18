/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** draw.c
*/

#include <SFML/Graphics.h>
#include "include/my.h"

void draw(t_global *global)
{
    sfRenderWindow_drawSprite(global->window.window, global->bg.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->duck1.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->shotr.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->shot.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->dog.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->hit.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->round.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->score.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->hitr.sp, NULL);
    sfRenderWindow_drawSprite(global->window.window, global->cross.sp, NULL);
}
