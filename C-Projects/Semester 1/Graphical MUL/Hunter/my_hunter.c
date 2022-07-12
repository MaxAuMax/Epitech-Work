/*
** EPITECH PROJECT, 2021
** graphical
** File description:
** my_hunter.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdlib.h>
#include "include/my.h"

void clock(t_global *global)
{
    if (global->duck_clock.seconds > 0.07) {
        move_rect(&global->duck1, 41, 7, 80);
        move_sprite(&global->duck1, global->duck1.sp, 2000, global->window.level);
        sfClock_restart(global->duck_clock.clock);
    }
    if (global->dog_clock.seconds > 0.2) {
        move_rect(&global->dog, 39, 136, 160);
        sfClock_restart(global->dog_clock.clock);
    }
}

void wind(t_global *global)
{
    while (sfRenderWindow_isOpen(global->window.window)) {
        reset_clock(global);

        sfRenderWindow_display(global->window.window);
        events(global);
        texture(global);
        sfRenderWindow_clear(global->window.window, global->window.color);
        global->cross.mouse =
            sfMouse_getPositionRenderWindow(global->window.window);
        global->cross.mouse.x -= 12;
        global->cross.mouse.y -= 12;
        global->cross.pos =
            (sfVector2f){global->cross.mouse.x, global->cross.mouse.y};
        sfSprite_setPosition(global->cross.sp, global->cross.pos);

        draw(global);
        clock(global);
    }
}

void launch(t_global *global)
{
    create(global);
    global->window.hit = 0;
    global->window.bul = 3;

    global->duck_clock.clock = sfClock_create();
    global->dog_clock.clock = sfClock_create();

    set(global);

    sfSprite_setTexture(global->cross.sp, global->bg.texture, sfFalse);
    global->window.window = sfRenderWindow_create(global->window.video,
        "My_Hunter 2021", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(global->window.window, 60);
    sfRenderWindow_setMouseCursorVisible(global->window.window, sfFalse);

    wind(global);
}
