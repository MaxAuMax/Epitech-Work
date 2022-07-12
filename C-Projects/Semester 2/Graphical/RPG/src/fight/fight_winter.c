/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fight_winter.c
*/

#include "rpg.h"

void fight_cross(t_global *glb)
{
    glb->cur_pnj = 8;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->pb->str;
    glb->nm = "P'tit Biscuit";
    glb->next_scene = 5;
    glb->cur_en = 4;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fcross = true;
}

void fight_snowman(t_global *glb)
{
    glb->cur_pnj = 9;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->snowman->str;
    glb->nm = "Olaf";
    glb->next_scene = 5;
    glb->cur_en = 5;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fsnman = true;
}

void fight_santa(t_global *glb)
{
    glb->cur_en = 6;
    glb->fgt->update = false;
    glb->scene = 5;
}
