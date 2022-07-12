/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fade_out.c
*/

#include "rpg.h"

void poll_envent_inside(t_global *glb)
{
    if (glb->window->evt.type == sfEvtClosed)
        sfRenderWindow_close(glb->window->w);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        glb->scene = 3,
        sfRenderWindow_setMouseCursorVisible(glb->window->w, sfTrue);
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        regen_hp(glb);
        open_chest(glb);
    }
    if (sfKeyboard_isKeyPressed(sfKeyD))
        right_move_inside(glb), glb->show_inv = false;
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        left_move_inside(glb), glb->show_inv = false;
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        up_move_inside(glb), glb->show_inv = false;
    if (sfKeyboard_isKeyPressed(sfKeyS))
        down_move_inside(glb), glb->show_inv = false;
}

void event_inside(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        poll_envent_inside(glb);
    }
    if (glb->show_inv)
        sfSprite_setPosition(glb->chest->sp, (sfVector2f){1100, 200}),
        sfRenderWindow_drawSprite(glb->window->w, glb->chest->sp, NULL),
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->weapon->sp, NULL),
        sfRenderWindow_drawSprite(glb->window->w,
        glb->player->weapon->sp, NULL);
    else
        sfSprite_setPosition(glb->chest->sp, (sfVector2f){2000, 2000});
    glb->player->player->pos.x = glb->player->x;
    glb->player->player->pos.y = glb->player->y;
    sfSprite_setPosition(glb->player->player->sp, glb->player->player->pos);
    sfSprite_setPosition(glb->cur_map, (sfVector2f){0, 0});
}

void fo_out(t_sprite *fx, sfClock *clk, t_global *glb)
{
    fx->rect.left = 7680 - 1920;
    sfSprite_setPosition(fx->sp, (sfVector2f){0, 0});
    while (fx->rect.left != 0) {
        sfTime pl_time;
        float pl_seconds;
        pl_time = sfClock_getElapsedTime(clk);
        pl_seconds = pl_time.microseconds / 1000000.0;
        if (pl_seconds > 0.3) {
            fx->rect.left -= 1920;
            sfSprite_setTextureRect(fx->sp, fx->rect);
            sfRenderWindow_drawSprite(glb->window->w, fx->sp, NULL);
            sfRenderWindow_display(glb->window->w);
            sfClock_restart(clk);
        }
    }
}

void fo_in(t_sprite *fx, sfClock *clk, t_global *glb)
{
    fx->rect.left = 0;
    while (fx->rect.left != 7680 - 1920) {
        sfTime pl_time;
        float pl_seconds;
        pl_time = sfClock_getElapsedTime(clk);
        pl_seconds = pl_time.microseconds / 1000000.0;
        if (pl_seconds > 0.3) {
            fx->rect.left += 1920;
            sfRenderWindow_drawSprite(glb->window->w, glb->cur_map, NULL);
            sfRenderWindow_drawSprite(glb->window->w,
            glb->player->player->sp, NULL);
            sfSprite_setTextureRect(fx->sp, fx->rect);
            sfRenderWindow_drawSprite(glb->window->w, fx->sp, NULL);
            sfRenderWindow_display(glb->window->w);
            sfClock_restart(clk);
        }
    }
}

void fade_out(t_sprite *fx, sfClock *clk, t_global *glb, int state)
{
    if (state == 0) {
        fo_out(fx, clk, glb);
    } else if (state == 1) {
        fo_in(fx, clk, glb);
    }
}
