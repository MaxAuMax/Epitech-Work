/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** move_cross.c
*/

#include "my.h"

void move_up_cross(WINDOW *window, PLAYER *player, infos *info, t_crosses *cross)
{
    char check;
    check = check_char(info, cross->posx, cross->posy - 1);
    if (check != '#') {
        mvwaddch(window, cross->posy, cross->posx, ' ');
        cross->posy--;
        player->posy--;
    }
}

void move_down_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross)
{
    char check;
    int i = 0;
    check = check_char(info, cross->posx, cross->posy + 1);
    if (check != '#') {
        mvwaddch(window, cross->posy, cross->posx, ' ');
        cross->posy++;
        player->posy++;
    }
}

void move_left_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross)
{
    char check;
    int i = 0;
    check = check_char(info, cross->posx - 1, cross->posy);
    if (check != '#') {
        mvwaddch(window, cross->posy, cross->posx, ' ');
        cross->posx--;
        player->posx--;
    }
}

void move_right_cross(WINDOW *window, PLAYER *player, infos *info,
    t_crosses *cross)
{
    char check;
    int i = 0;
    check = check_char(info, cross->posx + 1, cross->posy);
    if (check != '#') {
        mvwaddch(window, cross->posy, cross->posx, ' ');
        cross->posx++;
        player->posx++;
    }
}