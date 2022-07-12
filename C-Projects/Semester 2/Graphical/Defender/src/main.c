/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myrunner-maxime.mallet
** File description:
** main.c
*/

#include "my.h"

void read_maps(t_global *global, char *str)
{
    int fd = open(str, O_RDONLY);
    read(fd, global->map, 128);
    global->map[128] = '\0';
    close(fd);
}

int main(int ac, char **av)
{
    t_global *global = malloc(sizeof(t_global));
    global->status = 0;
    if (ac == 1) {
        global->window.video = (sfVideoMode){1920, 1080, 32};
        global->window.color = (sfColor){0, 0, 0};
        global->window.window =
            sfRenderWindow_create(global->window.video,
            "MY_Defender", sfClose | sfResize, NULL);
        sfRenderWindow_setFramerateLimit(global->window.window, 60);
        read_maps(global, "src/maps/map_three");
        my_defender(global);
    } else {
        usage();
        return (84);
    }
    destroy_it(global);
    free(global);
    return (0);
}
