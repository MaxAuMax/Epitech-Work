/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_pnj.c
*/

#include "rpg.h"

void init_all_pnj(t_global *glb)
{
    glb->pnj_clk = sfClock_create();
    init_marcel(glb);
    init_conor(glb);
    init_gege(glb);
}

void init_marcel(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/pnj/marcel.png", NULL);
    glb->marcel->sp = create_object((sfVector2f){1070, 350},
    (sfIntRect){0, 0, 32, 36}, txtr, (sfVector2f){2.3, 2.3});
    glb->marcel->x = 1070;
    glb->marcel->y = 350;
}

void init_conor(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/pnj/conor.png", NULL);
    glb->conor->sp = create_object((sfVector2f){1370, -250},
    (sfIntRect){0, 0, 32, 30}, txtr, (sfVector2f){2.3, 2.3});
    glb->conor->x = 1370;
    glb->conor->y = -250;
}

void init_gege(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/pnj/gege.png", NULL);
    glb->gege->sp = create_object((sfVector2f){3460, -800},
    (sfIntRect){0, 0, 32, 28}, txtr, (sfVector2f){2.3, 2.3});
    glb->gege->x = 3460;
    glb->gege->y = -800;
}
