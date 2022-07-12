/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** intro.c
*/

#include "rpg.h"

void launch_intro(t_global *glb)
{
    int end = 0;
    while (sfRenderWindow_isOpen(glb->window->w)) {
        if (glb->scene == -1) {
            end = intro(glb, end);
            sfRenderWindow_drawSprite(glb->window->w,
            glb->intro->sp, NULL);
            sfRenderWindow_display(glb->window->w);
        } else
            break;
    }
}

void init_clock_intro(t_global *glb)
{
    glb->intro = malloc(sizeof(t_sprite));
    glb->intro->sp = sfSprite_create();
    glb->intro->txtr = sfTexture_createFromFile("assets/menu/intro.png", NULL);
    glb->intro->rect = (sfIntRect){0, 0, 1280, 720};
    glb->intro->scale = (sfVector2f){1.5, 1.5};
    sfSprite_setScale(glb->intro->sp, glb->intro->scale);
    sfSprite_setTexture(glb->intro->sp, glb->intro->txtr, sfFalse);
    sfSprite_setTextureRect(glb->intro->sp, glb->intro->rect);
}

void event_intro(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(glb->window->w);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
            glb->scene = 0;
    }
}

void check_intro_pos(t_global *glb)
{
    if (glb->intro->rect.left >= 10240) {
        glb->intro->rect.left = 0;
        glb->intro->rect.top += 720;
    }
}

int intro(t_global *glb, int end)
{
    sfTime time = sfClock_getElapsedTime(glb->c_intro);
    float seconds = time.microseconds / 1000000.0;
    event_intro(glb);
    sfRenderWindow_clear(glb->window->w, glb->window->color);
    if (end < 79) {
        if (seconds > 0.06) {
            glb->intro->rect.left += 1280;
            check_intro_pos(glb);
            sfSprite_setTextureRect(glb->intro->sp, glb->intro->rect);
            sfClock_restart(glb->c_intro);
            end++;
        }
    } else {
        if (seconds > 3) {
            glb->scene = 0;
            sfClock_restart(glb->c_intro);
        }
    }
    return (end);
}
