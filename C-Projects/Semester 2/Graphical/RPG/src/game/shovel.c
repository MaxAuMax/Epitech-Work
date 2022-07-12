/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** shovel.c
*/

#include "rpg.h"

void get_shov(t_global *glb)
{
    char *str = "Hooooo!!!    Voila des cadeaux\n";
    glb->talk = true, glb->dsp = false, glb->chat = str;
    glb->nm = "Warrior";
    glb->cur_pnj = 10;
    glb->next_scene = 1;
    glb->scene = 7;
    if (glb->inv_arr[2][3] == 'v')
        glb->inv_arr[2][3] = 'p', glb->shov = true; return;
    if (glb->inv_arr[2][2] == 'v')
        glb->inv_arr[2][2] = 'p', glb->shov = true; return;
    if (glb->inv_arr[2][1] == 'v')
        glb->inv_arr[2][1] = 'p', glb->shov = true; return;
    if (glb->inv_arr[2][0] == 'v')
        glb->inv_arr[2][0] = 'p', glb->shov = true; return;
    if (glb->inv_arr[1][3] == 'v')
        glb->inv_arr[1][3] = 'p', glb->shov = true; return;
    if (glb->inv_arr[1][2] == 'v')
        glb->inv_arr[1][2] = 'p', glb->shov = true; return;
}

void get_stick(t_global *glb)
{
    char *str = "Hooooo!!!    Voila un  BATON\n";
    glb->talk = true, glb->dsp = false, glb->chat = str;
    glb->cur_pnj = 10;
    glb->nm = "Warrior";
    glb->next_scene = 1;
    glb->scene = 7;
    if (glb->inv_arr[2][3] == 'v')
        glb->inv_arr[2][3] = 'b', glb->stick = true; return;
    if (glb->inv_arr[2][2] == 'v')
        glb->inv_arr[2][2] = 'b', glb->stick = true; return;
    if (glb->inv_arr[2][1] == 'v')
        glb->inv_arr[2][1] = 'b', glb->stick = true; return;
    if (glb->inv_arr[2][0] == 'v')
        glb->inv_arr[2][0] = 'b', glb->stick = true; return;
    if (glb->inv_arr[1][3] == 'v')
        glb->inv_arr[1][3] = 'b', glb->stick = true; return;
    if (glb->inv_arr[1][2] == 'v')
        glb->inv_arr[1][2] = 'b', glb->stick = true; return;
}
