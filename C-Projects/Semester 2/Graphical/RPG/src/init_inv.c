/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** init_inv.c
*/

#include "rpg.h"

void creat_inv(t_global *glb)
{
    sfTexture *txtr = sfTexture_createFromFile("assets/obj/weapon.png", NULL);
    glb->player->weapon = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 48, 48}, txtr, (sfVector2f){3, 3});
    sfTexture *txtr2 = sfTexture_createFromFile("assets/obj/helmet.png", NULL);
    glb->player->helmet = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 48, 48}, txtr2, (sfVector2f){3, 3});
    sfTexture *txtr3 = sfTexture_createFromFile("assets/obj/shield.png", NULL);
    glb->player->shield = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 48, 48}, txtr3, (sfVector2f){3, 3});
    sfTexture *txtr4 = sfTexture_createFromFile("assets/obj/armor.png", NULL);
    glb->player->armor = create_object((sfVector2f){3600, 550},
    (sfIntRect){0, 0, 48, 48}, txtr4, (sfVector2f){1, 1});
    sfTexture *txtr5 = sfTexture_createFromFile("assets/char/inv.png", NULL);
    glb->player->inv = create_object((sfVector2f){200, 200},
    (sfIntRect){0, 0, 720, 720}, txtr5, (sfVector2f){1, 1});
    sfTexture *txtr6 = sfTexture_createFromFile("assets/obj/shov.png", NULL);
    glb->player->shov = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 48, 48}, txtr6, (sfVector2f){3, 3});
    sfTexture *txtr7 = sfTexture_createFromFile("assets/obj/stick.png", NULL);
    glb->player->stick = create_object((sfVector2f){0, 0},
    (sfIntRect){0, 0, 48, 48}, txtr7, (sfVector2f){3, 3});
    sfTexture *txtr9 = sfTexture_createFromFile("assets/char/stat_w.png",
        NULL);
    glb->player->inv_stat_w = create_object((sfVector2f){340, 0},
    (sfIntRect){0, 0, 720, 720}, txtr9, (sfVector2f){1, 1});
}

void init_inv_arr(t_global *glb)
{
    glb->inv_arr = malloc(sizeof(char *) * 4);
    for (int i = 0; i < 3; i++) {
        glb->inv_arr[i] = malloc(sizeof(char) * 5);
        glb->inv_arr[i][0] = 'v';
        glb->inv_arr[i][1] = 'v';
        glb->inv_arr[i][2] = 'v';
        glb->inv_arr[i][3] = 'v';
        glb->inv_arr[i][4] = '\0';
    }
}

void init_inv_bar(t_global *glb)
{
    sfTexture *t = sfTexture_createFromFile("assets/obj/inv_select.png", NULL);
    glb->player->i_sel = create_object((sfVector2f){3000, 3000},
    (sfIntRect){0, 0, 48, 48}, t, (sfVector2f){3, 3});
    glb->inv_bar = malloc(sizeof(char) * 5);
    glb->inv_bar[0] = 'v';
    glb->inv_bar[1] = 'v';
    glb->inv_bar[2] = 'v';
    glb->inv_bar[3] = 'v';
    glb->inv_bar[4] = '\0';
}

void init_inv(t_global *glb)
{
    creat_inv(glb);
    init_inv_arr(glb);
    glb->grab = false;
    glb->g_stkx = 0;
    glb->g_stky = 0;
    glb->inv_arr_pos = malloc(sizeof(pos_t *) * 13);
    glb->inv_arr_pos[12] = NULL;
    fiiling_inv(glb);
    init_inv_bar(glb);
    glb->player->gold = 30;
    glb->arm1 = false, glb->arm2 = false, glb->arm3 = false;
}
