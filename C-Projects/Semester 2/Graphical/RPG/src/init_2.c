/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_2.c
*/

#include "rpg.h"

void init_pnj(t_global *glb)
{
    glb->dsp = false;
    glb->click = 0;
    glb->selct = 0;
    glb->marcel = malloc(sizeof(t_pnj));
    glb->conor = malloc(sizeof(t_pnj));
    glb->gege = malloc(sizeof(t_pnj));
    glb->talk = false ,glb->talk_marcel = false;
    glb->talk_conor = false, glb->talk_gege = false;
    init_all_pnj(glb);
    init_all_enemis(glb);
    init_string(glb);
    glb->order = false;
}

void init_win_lose(t_global *glb)
{
    glb->scene = -1;
    glb->player = init_player();
    glb->show_inv = false;
    glb->fx = init_fx();
    sfTexture *txtr = sfTexture_createFromFile("assets/other/lose.png", NULL);
    glb->lose = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, txtr, (sfVector2f){1, 1});
    txtr = sfTexture_createFromFile("assets/other/win.png", NULL);
    glb->win = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 1920, 1080}, txtr, (sfVector2f){1, 1});
}
