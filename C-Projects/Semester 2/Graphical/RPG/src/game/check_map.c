/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** check_map.c
*/

#include "rpg.h"

int chek_plaine(t_global *glb, sfColor g)
{
    if (g.r == 255 && g.g == 0 && g.b == 20) tp_l_aut(glb);
    if (g.r == 120 && g.g == 255 && g.b == 0) tp_tuto(glb);
    if (g.r == 200 && g.g == 200 && g.b == 200) {
        if (!glb->fb1) fight_b1(glb);
        else return 1;
    }
    if (g.r == 100 && g.g == 100 && g.b == 100) {
        if (!glb->fb2) fight_b2(glb);
        else return 1;
    }
    if (g.r == 130 && g.g == 130 && g.b == 130) {
        if (!glb->arm1) arm1(glb);
        else return 1;
    }
    return 0;
}

int chek_winter(t_global *glb, sfColor g)
{
    if (g.r == 180 && g.g == 30 && g.b == 50 && !glb->shov) get_shov(glb);
    if (g.r == 255 && g.g == 0 && g.b == 20) tp_t_aut(glb);
    if (g.r == 64 && g.g == 64 && g.b == 115) {
        if (!glb->fcross) fight_cross(glb);
        else return 1;
    }
    if (g.r == 204 && g.g == 204 && g.b == 255) {
        if (!glb->fsnman) fight_snowman(glb);
        else return 1;
    }
    if (g.r == 200 && g.g == 50 && g.b == 50)
        fight_santa(glb);
    if (g.r == 130 && g.g == 130 && g.b == 130) {
        if (!glb->arm2) arm3(glb);
        else return 1;
    }
    return 0;
}

int chek_aut(t_global *glb, sfColor g)
{
    if (g.r == 205 && g.g == 180 && g.b == 45 && !glb->stick) get_stick(glb);
    if (g.r == 255 && g.g == 0 && g.b == 20) tp_r_plaine(glb);
    if (g.r == 50 && g.g == 255 && g.b == 255) tp_win(glb);
    if (g.r == 255 && g.g == 130 && g.b == 50) {
        if (!glb->fpunk) fight_punkin(glb);
        else return 1;
    }
    if (g.r == 200 && g.g == 50 && g.b == 120) {
        if (!glb->fgryrd) fight_graveyard(glb);
        else return 1;
    }
    if (g.r == 130 && g.g == 130 && g.b == 130) {
        if (!glb->arm3) arm2(glb);
        else return 1;
    }
    return 0;
}

int chek_tuto(t_global *glb, sfColor g)
{
    if (g.r == 255 && g.g == 0 && g.b == 20) tp_l_plaine(glb);
    if (g.r == 200 && g.g == 210 && g.b == 45) {
        if (!glb->talk_marcel) talk_marcel(glb);
        else return 1;
    }
    if (g.r == 70 && g.g == 215 && g.b == 20) {
        if (!glb->talk_conor) talk_conor(glb);
        else return 1;
    }
    if (g.r == 245 && g.g == 30 && g.b == 225) {
        if (!glb->talk_gege) talk_gege(glb);
        else return 1;
    }
    return 0;
}
