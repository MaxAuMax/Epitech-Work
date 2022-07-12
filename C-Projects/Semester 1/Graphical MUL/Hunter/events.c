/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** events.c
*/

#include <SFML/Graphics.h>
#include "include/my.h"

void mouse_events(t_global *global)
{
    sfVector2i mouse = {0, 0};

    if (global->window.event.type == sfEvtMouseButtonPressed) {
        mouse = sfMouse_getPositionRenderWindow(global->window.window);
        if (mouse.x >= global->duck1.pos.x - 50
        && mouse.x <= global->duck1.pos.x + 110
        && mouse.y >= global->duck1.pos.y - 10
        && mouse.y <= global->duck1.pos.y + 120) {
            global->duck1.pos.x = -150;
            global->duck1.pos.y = rand()%151*4.25;
            sfVector2f new = {global->duck1.pos.x, global->duck1.pos.y};
            sfSprite_setPosition(global->duck1.sp, new);
            randco(&global->duck1);
            global->window.hit += 1;
            check_hit(global);
        } else {
            global->window.bul -= 1;
            check_bul(global);
        }
    }
}

void events(t_global *global)
{
    while (sfRenderWindow_pollEvent(global->window.window,
        &global->window.event)) {
        if (global->window.event.type == sfEvtClosed)
            sfRenderWindow_close(global->window.window);
        if (global->window.event.type == sfEvtKeyPressed) {
            if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
                sfRenderWindow_close(global->window.window);
            }
        }
        mouse_events(global);
    }
}
