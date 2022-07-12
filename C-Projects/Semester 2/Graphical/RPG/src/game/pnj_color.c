/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** pnj_color.c
*/

#include "rpg.h"

void talk_marcel(t_global *glb)
{
    glb->cur_pnj = 1;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->marcel->str;
    glb->nm = "Marcel";
    glb->talk_marcel = true;
    glb->next_scene = 1;
    glb->scene = 7;
}

void talk_conor(t_global *glb)
{
    glb->cur_pnj = 2;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->conor->str;
    glb->nm = "Connor";
    glb->talk_conor = true;
    glb->next_scene = 1;
    glb->scene = 7;
}

void talk_gege(t_global *glb)
{
    glb->cur_pnj = 3;
    glb->talk = true;
    glb->dsp = false;
    glb->chat = glb->gege->str;
    glb->nm = "Geraldine";
    glb->talk_gege = true;
    glb->next_scene = 1;
    glb->scene = 7;
}
