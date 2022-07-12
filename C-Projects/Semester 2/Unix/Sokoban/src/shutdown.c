/*
** EPITECH PROJECT, 2021
** B-PSU-200-NCE-2-1-mysokoban-maxime.mallet
** File description:
** shutdown.c
*/

#include "my.h"

void shutdown(infos *info)
{
    endwin();
    free(info->map);
    free(info);
    exit (84);
}
