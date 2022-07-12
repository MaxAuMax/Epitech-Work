/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-mydefender-allan.charlier
** File description:
** path.c
*/

#include "my.h"

void path_finding(t_more *more, char *map)
{
    int rd = rand()%10;
    if (more->cur_px <= 129) {
        if (my_strcmp(more->old_way, "FT") == 0)
            move_enemy(more, rd, 0, rd);
        if (my_strcmp(more->old_way, "BK") == 0)
            move_enemy(more, -rd, 0, rd);
        if (my_strcmp(more->old_way, "UP") == 0)
            move_enemy(more, 0, -rd, rd);
        if (my_strcmp(more->old_way, "DW") == 0)
            move_enemy(more, 0, rd, rd);
    } else
        find_path(more, map, rd);
}

void find_path(t_more *more, char *map, int rd)
{
    if (map[more->cur_tile + 1] == '2'
    && my_strcmp(more->old_way, "BK") == -1) {
        more->old_way = "FT";
        more->cur_px = 0;
        more->cur_tile += 1;
        move_enemy(more, rd, 0, rd);
        sfSprite_setRotation(more->sp, 0);
    } else if (map[more->cur_tile - 1] == '2'
    && my_strcmp(more->old_way, "FT") == -1) {
        more->old_way = "BK";
        more->cur_px = 0;
        more->cur_tile -= 1;
        move_enemy(more, -rd, 0, rd);
        sfSprite_setRotation(more->sp, 180);
    } else
        find_path_again(more, map, rd);
}

void find_path_again(t_more *more, char *map, int rd)
{
    if (map[more->cur_tile - 16] == '2'
    && my_strcmp(more->old_way, "DW") == -1 && more->cur_tile > 16) {
        more->old_way = "UP";
        more->cur_px = 0;
        more->cur_tile -= 16;
        move_enemy(more, 0, -rd, rd);
        sfSprite_setRotation(more->sp, 270);
    } else if (map[more->cur_tile + 16] == '2'
    && my_strcmp(more->old_way, "UP") == -1) {
        more->old_way = "DW";
        more->cur_px = 0;
        more->cur_tile += 16;
        move_enemy(more, 0, rd, rd);
        sfSprite_setRotation(more->sp, 90);
    }
}
