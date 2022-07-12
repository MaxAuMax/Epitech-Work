/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** obj_event.c
*/

#include "rpg.h"

void chest_house(t_global *glb)
{
    sfImage_getPixel(glb->map_bw, glb->player->x + 1920/2 + 45,
    glb->player->y + 1080/2 + 56).b == 255.0;
}
