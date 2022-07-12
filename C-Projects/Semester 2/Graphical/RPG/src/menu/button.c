/*
** EPITECH PROJECT, 2021
** Hugo
** File description:
** button.c
*/

#include "rpg.h"

void button_settings(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->setings->pos.x &&
    pos_mouse.x <= glb->setings->pos.x + 216 &&
    pos_mouse.y >= glb->setings->pos.y &&
    pos_mouse.y <= glb->setings->pos.y + 72) {
        glb->setings->rect.left = 144;
        sfSprite_setTextureRect(glb->setings->sp, glb->setings->rect);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            glb->scene = 2;
    } else {
        glb->setings->rect.left = 0;
        sfSprite_setTextureRect(glb->setings->sp, glb->setings->rect);
    }
}

void button_quit(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->quit->pos.x &&
    pos_mouse.x <= glb->quit->pos.x + 288 &&
    pos_mouse.y >= glb->quit->pos.y && pos_mouse.y <= glb->quit->pos.y + 96) {
        glb->quit->rect.left = 144;
        sfSprite_setTextureRect(glb->quit->sp, glb->quit->rect);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            sfRenderWindow_close(glb->window->w);
    } else {
        glb->quit->rect.left = 0;
        sfSprite_setTextureRect(glb->quit->sp, glb->quit->rect);
    }
}

void button_play(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->play->pos.x &&
    pos_mouse.x <= glb->play->pos.x + 288 &&
    pos_mouse.y >= glb->play->pos.y && pos_mouse.y <= glb->play->pos.y + 96) {
        glb->play->rect.left = 144;
        sfSprite_setTextureRect(glb->play->sp, glb->play->rect);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfSprite_setScale(glb->player->player->sp,
            (sfVector2f){2, 2});
            sfSprite_setPosition(glb->player->player->sp,
            (sfVector2f){1920/2, 1080/2});
            glb->scene = 1,
            sfRenderWindow_setMouseCursorVisible(glb->window->w, sfFalse);
        }
    } else {
        glb->play->rect.left = 0;
        sfSprite_setTextureRect(glb->play->sp, glb->play->rect);
    }
}

void button_htp(sfVector2i pos_mouse, t_global *glb)
{
    if (pos_mouse.x >= glb->htp->pos.x &&
    pos_mouse.x <= glb->htp->pos.x + 216 &&
    pos_mouse.y >= glb->htp->pos.y && pos_mouse.y <= glb->htp->pos.y + 72) {
        glb->htp->rect.left = 144;
        sfSprite_setTextureRect(glb->htp->sp, glb->htp->rect);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            glb->scene = 4;
    } else {
        glb->htp->rect.left = 0;
        sfSprite_setTextureRect(glb->htp->sp, glb->htp->rect);
    }
}
