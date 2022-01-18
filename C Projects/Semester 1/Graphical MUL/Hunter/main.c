/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** main.c
*/

#include "include/my.h"

int again(int ac, char **av)
{
    if (av[1][0] == '2') {
        t_global global;
        global.window.video = (sfVideoMode){1920, 1080, 32};
        global.window.color = (sfColor){0, 0, 0};
        global.window.level = 60;
        launch(&global);
    } else if (av[1][0] == '3') {
        t_global global;
        global.window.video = (sfVideoMode){1920, 1080, 32};
        global.window.color = (sfColor){0, 0, 0};
        global.window.level = 80;
        launch(&global);
    } else
        return (84);
    return (0);
}

int another(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
        usage();
    else if (av[1][0] == '1') {
        t_global global;
        global.window.video = (sfVideoMode){1920, 1080, 32};
        global.window.color = (sfColor){0, 0, 0};
        global.window.level = 40;
        launch(&global);
    } else
        again(ac, av);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        t_global global;
        global.window.video = (sfVideoMode){1920, 1080, 32};
        global.window.color = (sfColor){0, 0, 0};
        global.window.level = 40;
        launch(&global);
    } else if (ac == 2) {
        another(ac, av);
    } else {
        usage();
        return (84);
    }
    return (0);
}
