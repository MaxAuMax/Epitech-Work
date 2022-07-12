/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** music.c
*/

#include "my.h"

void launch_music(t_global *global)
{
    global->music = sfMusic_createFromFile("files/music.ogg");
    sfMusic_play(global->music);
    sfMusic_setVolume(global->music, 10);
    sfMusic_setLoop(global->music, 1);

    global->jump = sfMusic_createFromFile("files/jump.ogg");
    sfMusic_setVolume(global->jump, 100);
}
