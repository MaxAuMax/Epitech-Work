/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** create_tiles.c
*/

#include "my.h"

void set_turret_spot(t_global *global, char *map, int i, int y)
{
    if (map[y] == '3') {
        sfSprite_setScale(global->all_tiles[i]->sp,
            global->all_tiles[i]->scale);
        sfSprite_setPosition(global->all_tiles[i]->sp,
            global->all_tiles[i]->pos);
        sfSprite_setTexture(global->all_tiles[i]->sp, global->turret, false);
    }
}

void set_tiles_options(t_global*global, char *map, int i, int y)
{
    if (map[y] == '1') {
        sfSprite_setScale(global->all_tiles[i]->sp,
            global->all_tiles[i]->scale);
        sfSprite_setPosition(global->all_tiles[i]->sp,
            global->all_tiles[i]->pos);
        sfSprite_setTexture(global->all_tiles[i]->sp,
            global->grass, false);
    } else if (map[y] == '2') {
        sfSprite_setScale(global->all_tiles[i]->sp,
            global->all_tiles[i]->scale);
        sfSprite_setPosition(global->all_tiles[i]->sp,
            global->all_tiles[i]->pos);
        sfSprite_setTexture(global->all_tiles[i]->sp, global->dirt, false);
    }
    set_turret_spot(global, map, i, y);
}

void set_tiles_struct(t_global *global, char *map, int tls)
{
    int x = 0, y = 0;
    int idx = 0;
    for (; idx < tls; idx++) {
        t_more *tile = malloc(sizeof(t_more));
        tile->sp = sfSprite_create();
        tile->rect.left = 0;
        tile->rect.top = 0;
        tile->rect.height = 128;
        tile->rect.width = 128;
        tile->scale = (sfVector2f){1, 1};
        tile->pos = (sfVector2f){x, y};
        global->all_tiles[idx] = tile;
        if (x >= 1790) {
            x = 0;
            y += 129;
        } else
            x += 129;
    }
    global->all_tiles[idx] = NULL;
}

void create_tiles(t_global *global, char *map)
{
    int tls = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != '\n')
            tls++;
    }
    global->grass = sfTexture_createFromFile("pics/tile/grass.png", NULL);
    global->dirt = sfTexture_createFromFile("pics/tile/dirt.png", NULL);
    global->turret = sfTexture_createFromFile("pics/tile/grass_point.png",
        NULL);
    global->all_tiles = malloc(sizeof(t_more *) * (tls + 1));
    set_tiles_struct(global, map, tls);

    for (int i = 0, y = 0; map[y] != '\0'; y++) {
        set_tiles_options(global, map, i, y);
        if (map[y] == '1' || map[y] == '2' || map[y] == '3')
            i++;
    }
}