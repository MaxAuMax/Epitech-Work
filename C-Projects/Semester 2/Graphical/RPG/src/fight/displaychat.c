/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** displaychat.c
*/

#include "rpg.h"

void display_chatbox_player(t_global *glb)
{
    switch (glb->cur_pnj) {
        case 1:
            display_marcelchat(glb);
            break;
        case 2:
            display_conorchat(glb);
            break;
        case 3:
            display_gegechat(glb);
            break;
    }
}

void display_chatbox_player2(t_global *glb)
{
    switch (glb->cur_pnj) {
        case 4:
            display_sklchat(glb);
            break;
        case 5:
            display_orgchat(glb);
            break;
        case 6:
            display_pumpkinchat(glb);
            break;
    }
}

void display_chatbox_player3(t_global *glb)
{
    switch (glb->cur_pnj) {
        case 7:
            display_treechat(glb);
            break;
        case 8:
            display_pbchat(glb);
            break;
        case 9:
            display_snowmanchat(glb);
            break;
        case 10:
            display_player(glb);
            break;
    }
}
