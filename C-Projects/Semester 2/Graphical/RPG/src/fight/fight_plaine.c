/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fight_plaine.c
*/

#include "rpg.h"

void fight_b1(t_global *glb)
{
    glb->cur_pnj = 4;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->skl->str;
    glb->nm = "Skeleton";
    glb->next_scene = 5;
    glb->cur_en = 0;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fb1 = true;
}

void fight_b2(t_global *glb)
{
    glb->cur_pnj = 5;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->org->str;
    glb->nm = "Org";
    glb->next_scene = 5;
    glb->cur_en = 1;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fb2 = true;
}
