/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** init_places.c
*/

#include "my.h"

void set_all_places(places **all_places, infos *info, int count)
{
    int x = 0, y = 0;
    int index = 0;
    for (int i = 0; info->map[i] != '\0'; i++) {
        if (info->map[i] == '\n') {
            y++;
            x = -1;
        } else if (info->map[i] == 'O') {
            places *place = malloc(sizeof(places));
            place->posx = x;
            place->posy = y;
            place->max = count;
            all_places[index] = place;
            index++;
        }
        x++;
    }
    all_places[index] = NULL;
}

places **init_place(infos *info)
{
    int count = 0;
    for (int num = 0; info->map[num] != '\0'; num++) {
        if (info->map[num] == 'X')
            count++;
    }
    places **all_places = malloc(sizeof(places) * count + 1);
    set_all_places(all_places, info, count);
    return (all_places);
}

void set_all_crosses(t_crosses **all_crosses, infos *info)
{
    int x = 0, y = 0;
    int index = 0;
    for (int i = 0; info->map[i] != '\0'; i++) {
        if (info->map[i] == '\n') {
            y++;
            x = -1;
        } else if (info->map[i] == 'X') {
            info->map[i] = ' ';
            t_crosses *cross = malloc(sizeof(t_crosses));
            cross->posx = x, cross->posy = y;
            cross->st_x = x, cross->st_y = y;
            cross->cha = "X";
            all_crosses[index] = cross;
            index++;
        }
        x++;
    }
    all_crosses[index] = NULL;
}

t_crosses **init_cross(infos *info)
{
    int count = 0;
    for (int num = 0; info->map[num] != '\0'; num++) {
        if (info->map[num] == 'X')
            count++;
    }
    t_crosses **all_crosses = malloc(sizeof(t_crosses) * (count + 1));
    set_all_crosses(all_crosses, info);
    return (all_crosses);
}
