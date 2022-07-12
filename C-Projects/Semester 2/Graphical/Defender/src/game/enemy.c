/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** ennemy.c
*/

#include "my.h"

int look_start(char *map)
{
    int line = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            line += 129;
        if ((map[i] == '\n' && map[i + 1] == '2') || map[0] == '2')
            return (line);
    }
    return (0);
}

void set_enemies_struct(t_global *global)
{
    int idx = 0;
    int x = -20, y = look_start(global->map);
    for (; idx < 10; idx++) {
        t_more *ennemy = malloc(sizeof(t_more));
        ennemy->sp = sfSprite_create();
        ennemy->rect = (sfIntRect){0, 0, 128, 128};
        ennemy->scale = (sfVector2f){1, 1};
        ennemy->pos = (sfVector2f){x + 64, y + 64};
        ennemy->cur_px = x;
        ennemy->cur_tile = ((y / 129) * 16);
        ennemy->old_way = malloc(3);
        ennemy->old_way = "FT";
        global->all_enemies[idx] = ennemy;
        x -= 50;
    }
    global->all_enemies[idx] = NULL;
}

void create_enemies(t_global *global)
{
    global->en_red =
    sfTexture_createFromFile("pics/enemies/ennemy_red.png", NULL);
    global->all_enemies = malloc(sizeof(t_more *) * 11);
    set_enemies_struct(global);

    for (int i = 0; global->all_enemies[i] != NULL; i++) {
        sfSprite_setScale(global->all_enemies[i]->sp,
            global->all_enemies[i]->scale);
        sfSprite_setPosition(global->all_enemies[i]->sp,
            global->all_enemies[i]->pos);
        sfSprite_setTexture(global->all_enemies[i]->sp,
            global->en_red, false);
        global->all_enemies[i]->cur_tile += 1;
        sfSprite_setOrigin(global->all_enemies[i]->sp, (sfVector2f){64, 64});
    }
}
