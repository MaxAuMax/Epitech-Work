/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_enemi2.c
*/

#include "rpg.h"

void init_pumpking(t_global *glb)
{
    glb->pumpking = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/pumpkin.png",
    NULL);
    glb->pumpking->sp = create_object((sfVector2f){-2582, -202},
    (sfIntRect){0, 0, 32, 32}, txtr, (sfVector2f){2.5, 2.5});
    glb->pumpking->x = -2575;
    glb->pumpking->y = -200;
    glb->pumpking->hp = 40;
    glb->pumpking->atk = 16;
}

void init_tree(t_global *glb)
{
    glb->tree = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/tree.png", NULL);
    glb->tree->sp = create_object((sfVector2f){-2582, -202},
    (sfIntRect){0, 0, 96, 96}, txtr, (sfVector2f){1, 1});
    glb->tree->x = -2575;
    glb->tree->y = -200;
    glb->tree->hp = 45;
    glb->tree->atk = 19;
}

void init_santa(t_global *glb)
{
    glb->santa = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/santa.png", NULL);
    glb->santa->sp = create_object((sfVector2f){900, 500},
    (sfIntRect){0, 0, 192, 192}, txtr, (sfVector2f){1, 1});
    glb->santa->hp = 100;
    glb->santa->atk = 20;
}
