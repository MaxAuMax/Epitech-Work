/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

int map_or_not(int ac, char **av, t_global *global)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        usage();
        return (0);
    } else {
        char map[500];
        int fd = open(av[1], O_RDONLY);
        read(fd, map, 499);
        map[500] = '\0';
        global->window.video = (sfVideoMode){1920, 1080, 32};
        global->window.color = (sfColor){0, 0, 0};
        global->window.window =
            sfRenderWindow_create(global->window.video,
            "My_Runner", sfClose | sfResize, NULL);
        sfRenderWindow_setFramerateLimit(global->window.window, 60);
        my_runner(global, map);
        return (0);
    }
}

int main(int ac, char **av)
{
    t_global *global = malloc(sizeof(t_global));

    if (ac == 2) {
        map_or_not(ac, av, global);
    } else if (ac == 1) {
        global->window.video = (sfVideoMode){1920, 1080, 32};
        global->window.color = (sfColor){0, 0, 0};
        global->window.window =
            sfRenderWindow_create(global->window.video,
            "My_Runner", sfClose | sfResize, NULL);
        sfRenderWindow_setFramerateLimit(global->window.window, 60);
        my_runner(global, "src/map/map1.txt");
    } else {
        usage();
        return (84);
    }
    destroy_all(global);
    free(global);
    return (0);
}
