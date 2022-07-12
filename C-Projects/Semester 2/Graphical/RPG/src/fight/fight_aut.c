/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fight_aut.c
*/

#include "rpg.h"

void fight_punkin(t_global *glb)
{
    glb->cur_pnj = 6;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->pumpking->str;
    glb->nm = "Pumpking";
    glb->next_scene = 5;
    glb->cur_en = 2;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fpunk = true;
}

void fight_graveyard(t_global *glb)
{
    glb->cur_pnj = 7;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->tree->str;
    glb->nm = "Scary tree";
    glb->next_scene = 5;
    glb->cur_en = 3;
    glb->fgt->update = false;
    glb->scene = 7;
    glb->fgryrd = true;
}
