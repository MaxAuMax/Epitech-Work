/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** events.c
*/

#include "rpg.h"

void right_move(t_global *glb)
{
    if (check_color(glb, glb->player->x +
    glb->player->player->rect.width * 2 + 1,
    glb->player->y + glb->player->player->rect.height * 2 - 10)) {
        right_dep(glb);
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height * 2)
        glb->player->player->rect.top = glb->player->player->rect.height * 2;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void left_move(t_global *glb)
{
    if (check_color(glb, glb->player->x - 10,
    glb->player->y + glb->player->player->rect.height * 2 - 10)) {
        left_dep(glb);
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height)
        glb->player->player->rect.top = glb->player->player->rect.height;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void up_move(t_global *glb)
{
    if (check_color(glb, glb->player->x + glb->player->player->rect.width,
    glb->player->y + glb->player->player->rect.height * 2 - 10)) {
        up_dep(glb);
    }
    if (glb->player->player->rect.top != glb->player->player->rect.height * 3)
        glb->player->player->rect.top = glb->player->player->rect.height * 3;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);

}

void down_move(t_global *glb)
{
    if (check_color(glb, glb->player->x + glb->player->player->rect.width,
    glb->player->y + glb->player->player->rect.height * 2 + 10)) {
        down_dep(glb);
    }
    if (glb->player->player->rect.top != 0)
        glb->player->player->rect.top = 0;
    sfSprite_setTextureRect(glb->player->player->sp,
    glb->player->player->rect);
}

void event_game(t_global *glb)
{
    while (sfRenderWindow_pollEvent(glb->window->w, &glb->window->evt)) {
        if (glb->window->evt.type == sfEvtClosed)
            sfRenderWindow_close(glb->window->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) glb->scene = 3,
        sfRenderWindow_setMouseCursorVisible(glb->window->w, sfTrue);
        if (sfKeyboard_isKeyPressed(sfKeyD)) right_move(glb);
        if (sfKeyboard_isKeyPressed(sfKeyQ)) left_move(glb);
        if (sfKeyboard_isKeyPressed(sfKeyZ)) up_move(glb);
        if (sfKeyboard_isKeyPressed(sfKeyS)) down_move(glb);
        if (sfKeyboard_isKeyPressed(sfKeyG))
            glb->selct++, perso_custom(glb), inventory_custom(glb);
        if (sfKeyboard_isKeyPressed(sfKeyI)) glb->scene = 6,
        sfRenderWindow_setMouseCursorVisible(glb->window->w, sfTrue);
        sfSprite_setPosition(glb->cur_map, glb->map->pos);
    }
    glb->player->player->pos.x = 1920/2;
    glb->player->player->pos.y = 1080/2;
    all_draw(glb);
}
