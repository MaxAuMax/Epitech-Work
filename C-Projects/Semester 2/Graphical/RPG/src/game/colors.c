/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** colors.c
*/

#include "rpg.h"

sfSprite *how_map(t_global *glb)
{
    switch (glb->int_map) {
        case 0:
            return glb->tuto_map->sp;
        case 1:
            return glb->map->sp;
        case 2:
            return glb->aut_map->sp;
        case 3:
            return glb->win_map->sp;
        default:
            break;
    }
}

sfImage *what_bw_map(t_global *glb)
{
    switch (glb->int_map) {
        case 0:
            return glb->tuto_map_bw;
        case 1:
            return glb->map_bw;
        case 2:
            return glb->aut_map_bw;
        case 3:
            return glb->win_map_bw;
        default:
            break;
    }
}

int check_color(t_global *glb, int x, int y)
{
    sfColor g = sfImage_getPixel(glb->cur_map_bw, x, y);
    if (g.r == 255 && g.g == 255 && g.b == 255) return 1;
    if (g.r == 20 && g.g == 0 && g.b == 255 && glb->inside == false)
        enter_tavern(glb);
    else if (g.r == 20 && g.g == 0 && g.b == 255 && glb->inside)
        exit_tavern(glb);
    if (glb->int_map == 0) return chek_tuto(glb, g);
    if (glb->int_map == 1) return chek_plaine(glb, g);
    if (glb->int_map == 2) return chek_aut(glb, g);
    if (glb->int_map == 3) return chek_winter(glb, g);
    return 0;
}
