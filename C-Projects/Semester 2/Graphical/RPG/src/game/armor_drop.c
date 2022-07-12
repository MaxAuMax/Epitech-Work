/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** armor_drop.c
*/

#include "rpg.h"

void arm1(t_global *glb)
{
    char *str = "Hooooo!!!    Voila une armure  ";
    glb->talk = true, glb->dsp = false, glb->chat = str;
    glb->cur_pnj = 10;
    glb->nm = "Warrior";
    glb->next_scene = 1;
    glb->scene = 7;
    sfSprite_setScale(glb->player->armor->sp, (sfVector2f){3, 3});
    if (glb->inv_arr[2][3] == 'v')
        glb->inv_arr[2][3] = 'a', glb->arm1 = true; return;
    if (glb->inv_arr[2][2] == 'v')
        glb->inv_arr[2][2] = 'a', glb->arm1 = true; return;
    if (glb->inv_arr[2][1] == 'v')
        glb->inv_arr[2][1] = 'a', glb->arm1 = true; return;
    if (glb->inv_arr[2][0] == 'v')
        glb->inv_arr[2][0] = 'a', glb->arm1 = true; return;
    if (glb->inv_arr[1][3] == 'v')
        glb->inv_arr[1][3] = 'a', glb->arm1 = true; return;
}

void arm2(t_global *glb)
{
    char *str = "Hooooo!!!    Une amelioration pour mon armure  ";
    glb->talk = true, glb->dsp = false, glb->chat = str;
    glb->cur_pnj = 10;
    glb->nm = "Warrior";
    glb->next_scene = 1;
    glb->scene = 7;
    sfSprite_setTextureRect(glb->player->armor->sp,
    (sfIntRect){0, 48, 48, 48});

}

void arm3(t_global *glb)
{
    char *str = "Hooooo!!!    Une autre amelioration pour mon armure  ";
    glb->talk = true, glb->dsp = false, glb->chat = str;
    glb->cur_pnj = 10;
    glb->nm = "Warrior";
    glb->next_scene = 1;
    glb->scene = 7;
    sfSprite_setTextureRect(glb->player->armor->sp,
    (sfIntRect){0, 96, 48, 48});
}
