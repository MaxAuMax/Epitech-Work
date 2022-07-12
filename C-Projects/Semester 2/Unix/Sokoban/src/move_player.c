/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** move_player.c
*/

#include "my.h"

void move_up(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses)
{
    char check;
    check = check_char(info, player->posx, player->posy - 1);
    int checkx;
    checkx = check_cross(all_crosses, player->posx, player->posy - 1);
    int checkxplus;
    checkxplus = check_cross(all_crosses, player->posx, player->posy - 2);
    if (checkxplus == -1 && checkx != -1)
        move_up_cross(window, player, info, all_crosses[checkx]);
    else if (checkx == -1 && check != '#') {
        mvwaddch(window, player->posy, player->posx, ' ');
        player->posy--;
        if (player->posy < 1)
            player->posy = 1;
    }
}

void move_down(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses)
{
    char check;
    check = check_char(info, player->posx, player->posy + 1);
    int checkx;
    checkx = check_cross(all_crosses, player->posx, player->posy + 1);
    int checkxplus;
    checkxplus = check_cross(all_crosses, player->posx, player->posy + 2);
    if (checkxplus == -1 && checkx != -1)
        move_down_cross(window, player, info, all_crosses[checkx]);
    else if (checkx == -1 && check != '#') {
        mvwaddch(window, player->posy, player->posx, ' ');
        player->posy++;
        if (player->posy > info->height - 2)
            player->posy = info->height - 2;
    }
}

void move_left(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses)
{
    char check;
    check = check_char(info, player->posx - 1, player->posy);
    int checkx;
    checkx = check_cross(all_crosses, player->posx - 1, player->posy);
    int checkxplus;
    checkxplus = check_cross(all_crosses, player->posx - 2, player->posy);
    if (checkxplus == -1 && checkx != -1)
        move_left_cross(window, player, info, all_crosses[checkx]);
    else if (checkx == -1 && check != '#') {
        mvwaddch(window, player->posy, player->posx, ' ');
        player->posx--;
        if (player->posx < 1)
            player->posx = 1;
    }
}

void move_right(WINDOW *window, PLAYER *player, infos *info,
    t_crosses **all_crosses)
{
    char check;
    check = check_char(info, player->posx + 1, player->posy);
    int checkx;
    checkx = check_cross(all_crosses, player->posx + 1, player->posy);
    int checkxplus;
    checkxplus = check_cross(all_crosses, player->posx + 2, player->posy);
    if (checkxplus == -1 && checkx != -1)
        move_right_cross(window, player, info, all_crosses[checkx]);
    else if (checkx == -1 && check != '#') {
        mvwaddch(window, player->posy, player->posx, ' ');
        player->posx++;
        if (player->posx > info->width - 2)
            player->posx = info->width - 2;
    }
}
