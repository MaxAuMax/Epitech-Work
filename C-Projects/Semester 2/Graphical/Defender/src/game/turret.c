/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** turret.c
*/

#include "my.h"

// void check_click(t_global *global, sfVector2i mouse)
// {
//     if (sfMouse_isButtonPressed(sfMouseLeft) == true) {
//         for (int idx = 0; global->all_tiles[idx] != NULL; idx++) {
//             if (mouse.x >= global->all_tiles[idx]->pos.x &&
//             mouse.x <= global->all_tiles[idx]->pos.x + 128 &&
//             mouse.y >= global->all_tiles[idx]->pos.y &&
//             mouse.y >= global->all_tiles[idx]->pos.y + 128) {
//                 if (global->gshop.rect.left == 1920) {
//                     sfSprite_setTexture(global->all_turret[global->plc]->sp,
//                     global->t_ten, sfFalse);
//                 } else if (global->gshop.rect.left == 3840) {
//                     sfSprite_setTexture(global->all_turret[global->plc]->sp,
//                     global->t_twen, sfFalse);
//                 } else if (global->gshop.rect.left == 5760) {
//                     sfSprite_setTexture(global->all_turret[global->plc]->sp,
//                     global->t_four, sfFalse);
//                 } else if (global->gshop.rect.left == 7680) {
//                     sfSprite_setTexture(global->all_turret[global->plc]->sp,
//                     global->t_eight, sfFalse);
//                 }
//                 global->all_turret[global->plc]->pos =
//                     global->all_tiles[idx]->pos;
//                 sfSprite_setPosition(global->all_turret[global->plc]->sp,
//                 global->all_turret[global->plc]->pos);
//                 global->plc++;
//             }
//         }
//     }
// }

bool check_turret2(t_global *global, sfVector2i mouse, bool val)
{
    if (mouse.x >= 1523 && mouse.x <= 1646 &&
    mouse.y >= 615 && mouse.y <= 741) {
        global->gshop.rect.left = 5760;
            val = sfTrue;
    } else if (mouse.x >= 1764 && mouse.x <= 1887 &&
    mouse.y >= 615 && mouse.y <= 741) {
        global->gshop.rect.left = 7680;
            val = sfTrue;
    } else
        global->gshop.rect.left = 0;
    return (val);
}

void check_turret(t_global *global, sfVector2i mouse)
{
    bool val = sfFalse;
    if (sfMouse_isButtonPressed(sfMouseLeft) == true) {
        if (mouse.x >= 1523 && mouse.x <= 1646 &&
        mouse.y >= 362 && mouse.y <= 488) {
            global->gshop.rect.left = 1920;
            val = sfTrue;
        } else if (mouse.x >= 1764 && mouse.x <= 1887 &&
        mouse.y >= 362 && mouse.y <= 488) {
            global->gshop.rect.left = 3840;
            val = sfTrue;
        } else
            val = check_turret2(global, mouse, val);
    }
}

void create_turret(t_global *global)
{
    global->plc = 0;
    global->all_turret = malloc(sizeof(t_turret *) * 500);
    global->t_ten = sfTexture_createFromFile("pics/turret/first.png", NULL);
    global->t_twen = sfTexture_createFromFile("pics/turret/snd.png", NULL);
    global->t_four = sfTexture_createFromFile("pics/turret/trd.png", NULL);
    global->t_eight = sfTexture_createFromFile("pics/turret/fth.png", NULL);
    int idx = 0;
    for (; global->all_turret[idx] != NULL; idx++) {
        t_turret *tur = malloc(sizeof(t_turret));
        tur->sp = sfSprite_create();
        tur->rect = (sfIntRect){0, 0, 128, 128};
        tur->pos = (sfVector2f){0, 0};
        tur->scale = (sfVector2f){1, 1};
        tur->cost = 0;
        global->all_turret[idx] = tur;
    }
    global->all_turret[idx] = NULL;
}
