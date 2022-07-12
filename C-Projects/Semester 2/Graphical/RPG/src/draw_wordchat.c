/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** draw_wordchat.c
*/

#include "rpg.h"

void draw_all_words(t_global *glb)
{
    sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->chatbox->sp, NULL);
    sfRenderWindow_drawSprite(glb->window->w, glb->player->player->sp,
    NULL);
    draw_pnj(glb);
    draw_enemi(glb);
    anim_pnj(glb);
    name_perso(glb);
    all_displaychat(glb);
}
