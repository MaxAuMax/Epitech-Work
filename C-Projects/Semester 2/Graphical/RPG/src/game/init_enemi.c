/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_enemi.c
*/

#include "rpg.h"

void init_all_enemis(t_global *glb)
{
    init_skl(glb);
    init_org(glb);
    init_pumpking(glb);
    init_tree(glb);
    init_bonhome(glb);
    init_pb(glb);
    init_santa(glb);
}

void init_skl(t_global *glb)
{
    glb->skl = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/Skeleton.png",
    NULL);
    glb->skl->sp = create_object((sfVector2f){3275, -1050},
    (sfIntRect){0, 0, 16, 14}, txtr, (sfVector2f){5, 5});
    glb->skl->x = 3275;
    glb->skl->y = -1050;
    glb->skl->hp = 30;
    glb->skl->atk = 10;
}

void init_org(t_global *glb)
{
    glb->org = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/org.png", NULL);
    glb->org->sp = create_object((sfVector2f){4575, -1275},
    (sfIntRect){0, 0, 32, 23}, txtr, (sfVector2f){3, 3});
    glb->org->x = 4575;
    glb->org->y = -1275;
    glb->org->hp = 35;
    glb->org->atk = 13;
}

void init_bonhome(t_global *glb)
{
    glb->snowman = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/bonhome.png",
    NULL);
    glb->snowman->sp = create_object((sfVector2f){-2582, -202},
    (sfIntRect){0, 0, 64, 52}, txtr, (sfVector2f){2.5, 2.5});
    glb->snowman->x = -2582;
    glb->snowman->y = -202;
    glb->snowman->hp = 55;
    glb->snowman->atk = 25;
}

void init_pb(t_global *glb)
{
    glb->pb = malloc(sizeof(t_enemi));
    sfTexture *txtr = sfTexture_createFromFile("assets/enemi/pb.png", NULL);
    glb->pb->sp = create_object((sfVector2f){-1200, -670},
    (sfIntRect){0, 0, 32, 26}, txtr, (sfVector2f){3, 3});
    glb->pb->x = -1200;
    glb->pb->y = -670;
    glb->pb->hp = 50;
    glb->pb->atk = 22;
}
