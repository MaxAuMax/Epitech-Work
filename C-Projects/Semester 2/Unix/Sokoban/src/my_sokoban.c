/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** my_sokoban.c
*/

#include "my.h"

void rest(GLOBAL *global)
{
    mvwprintw(global->window, 0, 0, global->info->map);
    for (int idx = 0; global->all_crosses[idx] != NULL; idx++)
        mvwaddch(global->window, global->all_crosses[idx]->posy,
            global->all_crosses[idx]->posx, 'X');
    mvwaddch(global->window, global->player->posy, global->player->posx, 'P');
    wrefresh(global->window);
    check_win(global);
}

void other_cases(GLOBAL *global)
{
    switch (global->info->get) {
        case KEY_LEFT:
            move_left(global->window, global->player, global->info,
                global->all_crosses);
            break;
        case KEY_RIGHT:
            move_right(global->window, global->player, global->info,
                global->all_crosses);
            break;
        case 32:
            restart(global);
        default:
            break;
    }
}

void cases(GLOBAL *global)
{
    switch (global->info->get) {
        case KEY_UP:
            move_up(global->window, global->player, global->info,
                global->all_crosses);
            break;
        case KEY_DOWN:
            move_down(global->window, global->player, global->info,
                global->all_crosses);
            break;
        default:
            break;
    }
    other_cases(global);
}

void events(GLOBAL *global)
{
    while ((global->info->get = getch()) != KEY_BACKSPACE) {
        cases(global);
        rest(global);
    }
}

void my_sokoban(GLOBAL *global)
{
    init_player(global->player, "P", global->info);
    refresh();

    wprintw(global->window, global->info->map);
    for (int idx = 0; global->all_crosses[idx] != NULL; idx++)
        mvwaddch(global->window, global->all_crosses[idx]->posy,
            global->all_crosses[idx]->posx, 'X');
    mvwaddch(global->window, global->player->posy, global->player->posx, 'P');
    wrefresh(global->window);

    events(global);
}
